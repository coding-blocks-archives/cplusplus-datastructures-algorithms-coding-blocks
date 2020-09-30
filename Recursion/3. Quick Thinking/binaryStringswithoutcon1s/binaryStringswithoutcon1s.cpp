// count binary strings of length N with no consecutive 1's

#include<bits/stdc++.h>
#define MAX 100000
using namespace std;

int count(int n){
	if(n==1) return 2;
	if(n==2) return 3;
		
	int a=2, b=3;
	for(int i=2; i<n; i++){
		int temp = b;
		b+=a;
		a=temp;
	}
	return b;
}

//There are two possiblities:
//In the last bit we can have 1 or 0
//If 0 is present in the last bit, 
//then we must return the count of numbers without consecutive 1's in the the remaing n-1 places
//But if the last bit is 1, then the next bit must be 0. 
//Thus, the system would behave normally after 2 places. Thus, we must return the count of numbers without consecutive 1's in the the remaing n-2 places

int count2(int n){
	if(n==1) return 2;
	if(n==2) return 3;
	
	return count2(n-1)+count(n-2);
}

int main(){
	int n; cin>>n;
	cout<<count(n)<<endl;
	cout<<count2(n)<<endl;
	
}


