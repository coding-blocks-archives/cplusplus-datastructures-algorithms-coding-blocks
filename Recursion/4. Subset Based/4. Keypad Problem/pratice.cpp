#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define MAX 100005
#define mod 1000000007 // 1e9+7
#define inf 1e18
using namespace std;

char keypad[][5] = {"", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wx", "yz"};
int counter = 0;

void subsets(char in[], char out[], int i = 0, int j = 0) {

	// Base case
	if (in[i] == '\0') {
		out[j] = '\0';
		cout << out << endl;
		return;
	}
	int key = in[i] - '0';
	// I will choose key-1
	for (int k = 0; keypad[key - 1][k] != '\0'; k++) {

		//Including keypad[key-1][k]
		out[j] = keypad[key - 1][k];
		subsets(in, out, i + 1, j + 1);
	}

}

int main() {
	char in[MAX] = "23";

	char out[MAX];

	subsets(in, out);
	cout << endl << counter;
}