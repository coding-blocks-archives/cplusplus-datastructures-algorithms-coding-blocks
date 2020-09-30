#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define MAX 100005
#define mod 1000000007 // 1e9+7
#define inf 1e18
using namespace std;

int price[MAX], weight[MAX], n, capacity, maxP = 0;

void subset(int i, int cw, int cp) {

	//Base Case
	if (i == n) {
		if (cw <= capacity) {
			maxP = max(maxP, cp);
			//cout << maxP << endl;
		}
		return;
	}

	// Including price and weight[i]
	subset(i + 1, cw + weight[i], cp + price[i]);

	//Excluding price and weight[i]
	subset(i + 1, cw, cp);

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

	subset(0, 0, 0);
	cout << maxP << endl;
}
