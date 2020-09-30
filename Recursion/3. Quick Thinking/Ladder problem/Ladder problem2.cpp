//Total n steps to be taken.
// at one time, we can take 1,2,3 steps. How many ways?

#include<bits/stdc++.h>
#include<climits>
#include<algorithm>
#include<math.h>
#define ll long long
#define MAX 100000
using namespace std;

int count(int n){
	// Base Case
	if(n==1 || n==0) return 1;
	if(n<0) return 0;
	
	return count(n-1)+count(n-2)+count(n-3);
}

int main(){
	
	int n; cin>>n;
	cout<<count(n);
	
}


