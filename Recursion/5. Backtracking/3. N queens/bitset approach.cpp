#include<bits/stdc++.h>
using namespace std;

bitset<30> col, d1, d2;

void solve(int r, int n, int &ans) {
	if (r == n) {


		ans++;
		return;
	}

	for (int c = 0; c < n; c++) { // Trying to place Queen at every place in the current row
		if (!col[c] && !d1[r - c + n - 1] && !d2[r + c]) { // If safe
			col[c] = d1[r - c + n - 1] = d2[r + c] = 1;	//Try placing Queen there
			solve(r + 1, n, ans);
			col[c] = d1[r - c + n - 1] = d2[r + c] = 0; // Backtracking
		}
	}
}

int main() {
	int n = 5;
	int ans = 0;
	//int board[20][20] = {0};
	solve(0, n, ans);
	cout << ans;
}