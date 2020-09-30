#include<bits/stdc++.h>
using namespace std;

int partition(int arr[], int s, int e){
	// inplace partition
	int pivot = e;
	int i=s-1;
	
	for(int j=s; j<e; j++){
		
		if(arr[j]<=arr[pivot]){
			i++;
			swap(arr[i], arr[j]);
		}
		if(arr[j]>arr[pivot]){
			// j already increases
		}
		
	}
	// Placing pivot element at correct place
	swap(arr[i+1], arr[pivot]);
	
	return i+1;
	
}

void quicksort(int arr[], int s, int e){
	// Base Case
	if(s>=e){
		// One or no element is present in the array.
		// So it is sorted.
		return;
	}
	int p=partition(arr, s, e);
	
	quicksort(arr, s, p-1);
	quicksort(arr, p+1, e);
}

int main(){
	int arr[]={2,7,8,6,1,5,4};
	int n = sizeof(arr)/sizeof(arr[0]);
	
	quicksort(arr, 0, n-1);
	
	for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}
}


