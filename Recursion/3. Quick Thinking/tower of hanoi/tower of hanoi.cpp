// tower of Hanoi

#include<bits/stdc++.h>
using namespace std;

int move(int n){
	if(n==1) return 1;
	
	return 2*move(n-1)+1;
}

int main(){
	int n; cin>>n;
	cout<<move(n)<<endl;
}


