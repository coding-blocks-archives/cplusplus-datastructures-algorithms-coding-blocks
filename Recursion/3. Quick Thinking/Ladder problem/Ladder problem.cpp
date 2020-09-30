//Total n steps to be taken.
// at one time, we can take 1,2,3 steps. How many ways?

#include<bits/stdc++.h>
#include<climits>
#include<algorithm>
#include<math.h>
#define ll long long
#define MAX 100000
using namespace std;

int main(){
	int dp[MAX]{0};
	dp[1]=1; dp[2]=2; dp[3]=4;
	
	for(int i=4; i<MAX; i++){
		dp[i] = dp[i-1] + dp[i-2] + dp[i-3];
	}
	
	int n; cin>>n;
	cout<<dp[n];
	
}


