#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

string extractStringAtKey(string str, int key) {
	//strtok
	char *s = strtok((char *)str.c_str(), " ");
	while (key > 1) {
		s = strtok(NULL, " ");
		key--;
	}
	return (string)s;
}
int convertToInt(string s) {
	int ans = 0;
	int  p = 1;
	for (int i = s.length() - 1; i >= 0; i--) {
		ans += ((s[i] - '0') * p);
		p = p * 10;
	}
	return ans;

}

bool numericCompare(pair<string, string> s1, pair<string, string> s2) {
	string key1, key2;
	key1 = s1.second;
	key2 = s2.second;

	return convertToInt(key1) < convertToInt(key2);

}
bool lexicoCompare(pair<string, string> s1, pair<string, string> s2) {
	string key1, key2;
	key1 = s1.second;
	key2 = s2.second;

	return key1 < key2;

}

int main() {



	int n;
	cin >> n;
	cin.get();

	string a[100];
	for (int i = 0; i < n; i++) {
		getline(cin, a[i]);
	}

	int key;
	string reversal, ordering;
	cin >> key >> reversal >> ordering;

	pair<string, string> strPair[100];



	for (int i = 0; i < n; i++) {

		strPair[i].first = a[i];
		strPair[i].second = extractStringAtKey(a[i], key);
	}

	//Next = sorting

	if (ordering == "numeric") {
		sort(strPair, strPair + n, numericCompare);
	}
	else {
		sort(strPair, strPair + n, lexicoCompare);
	}

	//Reversal
	if (reversal == "true") {
		for (int i = 0; i < n / 2; i++) {
			swap(strPair[i], strPair[n - i - 1]);
		}
	}

	//Print the output
	for (int i = 0; i < n; i++) {
		cout << strPair[i].first << endl;
	}

	return 0;

}