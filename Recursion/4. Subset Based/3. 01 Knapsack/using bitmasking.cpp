// Time O(n*2^n)

#include<bits/stdc++.h>
#include<climits>
#include<algorithm>
#include<math.h>
#define ll long long
#define MAX 1005
using namespace std;

void solve(){
	
	int n; cin>>n;
	int capacity, maxPrice=INT_MIN; cin>>capacity;
	
	int price[MAX]={0}, weight[MAX]={0};
	
	for(int i=0; i<n; i++) cin>>price[i];
	for(int i=0; i<n; i++) cin>>weight[i];
	
	for(int mask=0; mask<(1<<n); mask++){
		int curr_price=0;
		int curr_weight=0;
		
		for(int i=0; i<n; i++){
			if(mask&(1<<i)){
				curr_price += price[i];
				curr_weight += weight[i];
			}
		}
		
		if(curr_weight<=capacity){
			maxPrice = max(maxPrice, curr_price);
		}
		
	}
	
	cout<<maxPrice<<endl;
}

int main(){
	int t; cin>>t;
	while(t--){
		solve();
	}
}


