#include<bits/stdc++.h>
using namespace std;

//void generateSubsets(string first, string st, int s, int e){
//	// Base Case
//	if(s==e){
//		cout<<first<<endl;
//		cout<<first+st[s]<<endl;
//		return;
//	}
//	
//	generateSubsets(st, s+1, e);
//	generateSubsets(st[s],  st, s+1, e);
//	
//}

void generateSubsets(string str, int s, string curr){
	// Base Case
	if(s==str.length()){
		cout<<curr<<endl;
		return;
	}
	
	generateSubsets(str, s+1, curr);
	generateSubsets(str, s+1, curr+str[s]);
	
}

int main(){
	string str; cin>>str;
	
	int n = str.size();
	
	generateSubsets(str, 0, "");
	
}


