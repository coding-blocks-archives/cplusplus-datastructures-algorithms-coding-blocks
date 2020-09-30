// exponentiation using recursion

#include<bits/stdc++.h>
using namespace std;

int power(int a, int b){
	// Base case 
	if(b==0) return 1;
	return a*power(a,b-1);
}

int powerFast(int a, int b){
	// Base case
	if(b==0) return 1;
	if(b&1) return a*power(a, b/2)*power(a, b/2);
	else return power(a, b/2)*power(a, b/2);
}

int main(){
	int a, b; cin>>a>>b;
	cout<<power(a,b)<<endl;
	cout<<powerFast(a,b)<<endl;
}


