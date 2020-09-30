#include<bits/stdc++.h>
using namespace std;

int stringToInt(char a[], int n){
	// Base Case
	if(n<0) return 0;
	int digit = a[n]-'0';
	return (stringToInt(a, n-1)*10)+digit;
	
}

int main(){
	char a[]="1234";
	int n = strlen(a);
	int ans = stringToInt(a, n-1);
	cout<<ans;
}


