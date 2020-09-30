#include<bits/stdc++.h>
#include<climits>
#include<algorithm>
#include<math.h>
#define ll long long
#define MAX 100000
using namespace std;

int main(){
	string s; cin>>s;
	
	int n = s.size();
	
	for(int i=0; i<(1<<n); i++){
		
		for(int j=0; j<n; j++){
			if(i&(1<<j)){
				cout<<s[j];
			}
		}
		cout<<endl;
	}
	
}


