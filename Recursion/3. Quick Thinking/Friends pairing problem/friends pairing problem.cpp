// Friends pairing problem

// Given N, frinds who want to go to a party on bikes.
// Each person can go single, or as a couple. Find the number of ways in which N friends can go to the party.

#include<bits/stdc++.h>
#define MAX 100000
using namespace std;

int noOfWays(int n){
	// Base Case
	if(n==1 || n==0) return 1;
	if(n==2) return 2;
	
	return noOfWays(n-1)+(n-1)*noOfWays(n-2);
}

int topDown(int n, int dp[]){
	// Lookup
	if(dp[n]!=-1){
		return dp[n];
	}
	
	return dp[n]=topDown(n-1, dp) + (n-1)*topDown(n-2, dp);
}

int main(){
	int dp[MAX];
	std::fill_n(dp, MAX, -1);
	dp[0]=1; dp[1]=1; dp[2]=2;
	int n; cin>>n;
	cout<<noOfWays(n)<<endl;
	cout<<topDown(n, dp);
}


