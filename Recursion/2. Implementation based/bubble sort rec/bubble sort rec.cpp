#include<bits/stdc++.h>
using namespace std;

bool compare(int a, int b){
	return a<b;
}

void bubbleSort(int arr[], int n){
	//Base case
	if(n==1){
		return;
	}
	
	for(int i=0; i<n-1; i++){
		if(compare(arr[i+1], arr[i])){
			swap(arr[i+1], arr[i]);
		}
	}
	
	bubbleSort(arr, n-1);
	
}

// fully recursive
void bubbleSortRec(int arr[], int i, int n){
	// Base case
	if(n==1) return;
	if(i==n-1){
		//single pass of the current array has been done
		return bubbleSortRec(arr, 0, n-1);
	}
	
	if(compare(arr[i+1], arr[i])){
		swap(arr[i+1], arr[i]);
	}
	bubbleSortRec(arr, i+1, n);
}


int main(){
	int arr[]={1,4,7,3,9,10,6};
	int n=sizeof(arr)/sizeof(arr[0]);
	bubbleSortRec(arr,0, n);
	for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}
}


