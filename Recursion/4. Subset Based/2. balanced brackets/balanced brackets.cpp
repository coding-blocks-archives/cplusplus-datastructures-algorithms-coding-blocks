#include<bits/stdc++.h>
#include<climits>
#include<algorithm>
#include<math.h>
#define ll long long
#define MAX 100000
using namespace std;

void brackets(string s, int count_o, int count_c, int n){
	// Base Case
	if(count_c==n){
		cout<<s<<endl;
		return; 
	}
	
	if(count_o<n){
		brackets(s+"(", count_o+1, count_c, n);
	}
	if(count_c<count_o){
		brackets(s+")", count_o, count_c+1, n);
	}
}

int main(){
	int n; cin>>n;
	string s;
	brackets(s, 0, 0, n);
}


