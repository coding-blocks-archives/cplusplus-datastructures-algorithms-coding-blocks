#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define MAX 100005
#define mod 1000000007 // 1e9+7
#define inf 1e18
using namespace std;

void generate_subset(char in[], char out[], int i, int j) {

	if (in[i] == '\0') {
		out[j] = '\0';
		cout << out << endl;
		return;
	}

	// including in[i]
	out[j] = in[i];
	generate_subset(in, out, i + 1, j + 1);


	// Excluding in[i]
	generate_subset(in, out, i + 1, j);
}

int main() {
	char in[] = "abc";
	char out[10] = "";

	generate_subset(in, out, 0, 0);
}
