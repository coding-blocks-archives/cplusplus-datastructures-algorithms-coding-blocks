#include<iostream>
#include<algorithm>
using namespace std;

// in unsorted array

int main () {
    int arr[] = {2,3,1,6,5,4};
    int sum = 9;
    int n = sizeof(arr)/sizeof(int);
    int i = 0 , j=n-1;
    sort(arr,arr+n);
    while(i<j) {
        if(arr[i] + arr[j]==sum) {
            cout<<arr[i]<<" "<<arr[j]<<endl;
            i++;
            j--;
        }
        else if(arr[i]+arr[j]>sum) {
            j--;
        }
        else if(arr[i]+ arr[j]<sum) {
            i++;
        }
    }
    return 0;
}