#include<bits/stdc++.h>
using namespace std;

int n;
int ans = 0, DONE;


void solve(int rowMask, int ld, int rd) {
	if (rowMask == DONE) {
		ans++;
		return;
	}

	int safe = DONE & (~(rowMask | ld | rd));
	while (safe) {
		int p = safe & (-safe);
		safe = safe - p;
		solve(rowMask | p, (ld | p) <<< 1, (rd | p) >> 1);
	}
}

int main() {
	cin >> n;
	DONE = ((1 << n) - 1);
	solve(0, 0, 0);
	cout << ans << endl;
}