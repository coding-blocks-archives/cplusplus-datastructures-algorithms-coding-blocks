// The idea is to fix a prefix, generate all subsets beginning with current prefix. 
/// After all subsets with a prefix are generated, replace last character with one of the remaining characters
// CPP program to generate power set 
#include <bits/stdc++.h> 
using namespace std; 

// str : Stores input string 
// curr : Stores current subset 
// index : Index in current subset, curr 
void powerSet(string str, int index = -1, 
			string curr = "") 
{ 
	int n = str.length(); 

	// base case 
	if (index == n) 
		return; 

	// First print current subset 
	cout << curr << "\n"; 

	// Try appending remaining characters 
	// to current subset 
	for (int i = index + 1; i < n; i++) { 

		curr += str[i]; 
		powerSet(str, i, curr); 

		// Once all subsets beginning with 
		// initial "curr" are printed, remove 
		// last character to consider a different 
		// prefix of subsets. 
		curr.erase(curr.size() - 1); 
	} 
	return; 
} 

// Driver code 
int main() 
{ 
	string str = "abc"; 
	powerSet(str); 
	return 0; 
} 

