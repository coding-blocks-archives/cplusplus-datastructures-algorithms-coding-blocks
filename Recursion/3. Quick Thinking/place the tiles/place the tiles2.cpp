// Place the tiles
// Given a wall of size of 4 X N, and tiles of size (1,4) and (4,1).
// In how many ways you can build the wall?

#include<bits/stdc++.h>
using namespace std;

int noOfWays(int n){
	// Base Case
	if(n==1 || n==2 || n==3) return 1;
	if(n==4) return 2;
	
	return noOfWays(n-1)+noOfWays(n-4);
	
}
  
int main(){
	int n; cin>>n;
	cout<<noOfWays(n)<<endl;
}


