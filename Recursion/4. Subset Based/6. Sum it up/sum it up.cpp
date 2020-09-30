#include<bits/stdc++.h>
#define ll long long
#define MAX 100000
using namespace std;

ll n, target; 

bool solve(int in[], int out[], int i=0, int j=0, int sum=0){
	
	// Base Case
	if(sum==target){
		// Print the output
		for(int x=0; x<j; x++){
			cout<<out[x]<<" ";
		} cout<<endl;
		return true;
	}
	if(i==n){// input array has been exhausted
		return false;
	}
	if(sum+in[i]>target){
		return false;
	}
	
	// Rec case
	
	// Inlcuding in[i]
	out[j] = in[i];
	solve(in, out, i+1, j+1, sum+in[i]);
	
	// We will also try the case where we exclude in[i]
	// excluding in[i]
	solve(in, out, i+1, j, sum);
}

int main(){
	cin>>n;
	int arr[MAX]={0};
	for(int i=0; i<n; i++){
		cin>>arr[i];
	} sort(arr, arr+n);
	cin>>target;
	
	int out[MAX]={0};
	
	solve(arr, out);
	
}


