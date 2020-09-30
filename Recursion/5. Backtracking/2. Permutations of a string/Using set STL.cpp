// Permutatins using set STL

#include<bits/stdc++.h>
#include<set>
#include<string>
using namespace std;
set<string> s;

void permutation(char a[], int i=0){
	
	// Base Case
	if(a[i]=='\0'){
//		cout<<s<<endl;
		string t(a);
		s.insert(t);
		return;
	}
	
	for(int j=i; a[j]!='\0'; j++){ // For every element in s, 
		// replace it with s[i] and do permutations for the remaining
		swap(a[i], a[j]);
		permutation(a, i+1);
		// Backtracking - To restore the array
		swap(a[i], a[j]);
	}
}


int main(){
	char a[100]; cin>>a;
	
	permutation(a, 0);
	
	// Loop over the set
	for(auto str:s){
		cout<<str<<endl;
	}
	
}


