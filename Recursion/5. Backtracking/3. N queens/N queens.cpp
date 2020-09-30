#include<bits/stdc++.h>
#define ll long long
#define MAX 100000
using namespace std;
int counter = 0;

bool isSafe(int board[][20], int i, int j, int n) {

	// check for column
	for (int row = 0; row < i; row++) {
		if (board[row][j]) {
			return 0;
		}
	}

	// Check for left diagonal
	int x = i;
	int y = j;

	while (x >= 0 && y >= 0) {
		if (board[x][y]) return 0;
		x--; y--;
	}

	// Check for right diagonal
	x = i;
	y = j;

	while (x >= 0 && y < n) {
		if (board[x][y]) return 0;
		x--; y++;
	}

	// Therefore, the position is now safe
	return 1;
}

// i: starting row
bool solve(int board[][20], int i, int n) {
	// Base Case
	if (i == n) {
		// print board
//		for(int row=0; row<n; row++){
//			for(int col=0; col<n; col++){
//				if(board[row][col]){
//					cout<<"Q ";
//				}
//				else{
//					cout<<"_ ";
//				}
//			}cout<<endl;
//		}cout<<endl;

		counter++;

		//return true;
		// for all configuration
		return false;  // the control doesnot stop after being able to find one solution
	}

	// Recursive Case
	//Place the Qcueen at some place in the ith row where it is safe
	for (int j = 0; j < n; j++) {

		if (isSafe(board, i, j, n)) {
			board[i][j] = 1;
			if (solve(board, i + 1, n)) {
				return true;
			}
			else {
				board[i][j] = 0; // Backtracking
			}
		}
	}

	// If for loop has been exhausted and we still didnt find a safe position
	return 0;

}

int main() {
	int n = 4;
	//cin>>n;

	int board[20][20] = {0};

	solve(board, 0, n);
	cout << counter;
}


