#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

void permutation(char *s, int i=0){
	
	// Base Case
	if(s[i]=='\0'){
		cout<<s<<endl;
		return;
	}
	
	for(int j=i; s[j]!='\0'; j++){ // For every element in s, 
		// replace it with s[i] and do permutations for the remaining
		swap(s[i], s[j]);
		permutation(s, i+1);
		// Backtracking - To restore the array
		swap(s[i], s[j]);
	}
}

int main(){
	char s[100]; cin>>s;
	
	permutation(s);
}


