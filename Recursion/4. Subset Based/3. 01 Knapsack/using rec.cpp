#include<bits/stdc++.h>
#include<climits>
#include<algorithm>
#include<math.h>
#define ll long long
#define MAX 1005
using namespace std;

int capacity;
int n, maxSum = INT_MIN;
int price[MAX] = {0}, weight[MAX] = {0};

void solve(int *in, int *out, int i = 0, int j = 0, int cwt = 0, int cp = 0) {

	// Base Case
	if (i == n) {
		if (cwt <= capacity) {
			maxSum = max(maxSum, cp);
			//cout << maxSum << endl;
		}
		return;
	}

	// Including in[i]
	out[j] = in[i];
	if ( (cwt + in[i]) <= capacity)
		solve(in, out, i + 1, j + 1, cwt + in[i], cp + price[i]);

	// Excluding in[i]
	solve(in, out, i + 1, j, cwt, cp);

}


int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int t;
	cin >> t;
	while (t--) {
		maxSum = INT_MIN;
		cin >> n;
		cin >> capacity;
		int out[MAX] = {0};

		for (int i = 0; i < n; i++) cin >> price[i];
		for (int i = 0; i < n; i++) cin >> weight[i];

		// weight will be my input array
		solve(weight, out);

		if (maxSum != INT_MIN) cout << maxSum << endl;
		else cout << "0" << endl;

	}
}


