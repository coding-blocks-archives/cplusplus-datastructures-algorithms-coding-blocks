// first Occurence of key in an array

#include<bits/stdc++.h>
#include<climits>
#include<algorithm>
#include<math.h>
#define ll long long
#define MAX 100000
using namespace std;

int firstOcc(int arr[], int s, int e, int key){
	// Base case
	if(s==e) return -1;
	if(arr[s]==key) return s;
	
	return firstOcc(arr, s+1, e, key);
}

void allOcc(int arr[], int s, int e, int key){
	// Base case
	if(s==e) return;
	else if(arr[s]==key){
		cout<<s<<" ";
		allOcc(arr, s+1, e, key);
	}
	else{
		allOcc(arr, s+1, e, key);
	}
}


int main(){
	int arr[]={1,2,3,7,4,5,6,7,10};
	int key=7;
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<firstOcc(arr, 0, n, key)<<endl;
	allOcc(arr, 0, n, key);
}


