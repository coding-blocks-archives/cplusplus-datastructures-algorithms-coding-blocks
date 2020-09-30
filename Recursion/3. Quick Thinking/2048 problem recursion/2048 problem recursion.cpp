#include<bits/stdc++.h>
#include<climits>
#include<algorithm>
#include<math.h>
#define ll long long
#define MAX 100000
using namespace std;

void print(int n){
	
	switch(n){
		case 0: cout<<"zero"; break;
		case 1: cout<<"one"; break;
		case 2: cout<<"two"; break;
		case 3: cout<<"three"; break;
		case 4: cout<<"four"; break;
		case 5: cout<<"five"; break;
		case 6: cout<<"six"; break;
		case 7: cout<<"seven"; break;
		case 8: cout<<"eight"; break;
		case 9: cout<<"nine"; break;
		default: cout<<"error"; 
	}
}

void fun(int n){
	// Base case
	if(n==0) return;
	
	fun(n/10);
	print(n%10); cout<<" ";
}

int main(){
	int n=204478;
	fun(n);
}


