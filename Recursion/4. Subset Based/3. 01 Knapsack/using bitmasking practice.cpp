// Using bitmasking

#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define MAX 100005
#define mod 1000000007 // 1e9+7
#define inf 1e18
using namespace std;

int price[MAX], weight[MAX], n, capacity, maxP;

void solve() {

	for (int mask = 1; mask < 1 << n; mask++) {
		int cp = 0, cwt = 0;
		for (int i = 0; i < n; i++) {
			if (mask & 1 << i) {
				cwt += weight[i];
				cp += price[i];
			}
		}

		if (cwt <= capacity) {
			maxP = max(cp, maxP);
		}
	}

}

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n >> capacity;

	for (int i = 0; i < n; i++) cin >> price[i];
	for (int i = 0; i < n; i++) cin >> weight[i];


	solve();
	cout << maxP << endl;
}
