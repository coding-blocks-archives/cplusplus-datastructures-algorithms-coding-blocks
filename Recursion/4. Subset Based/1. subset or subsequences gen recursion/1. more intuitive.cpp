#include<bits/stdc++.h>
#include<climits>
#include<algorithm>
#include<math.h>
#define ll long long
#define MAX 100000
using namespace std;

void generate_subset(char *in, char *out, int i, int j){
	// Base Case
	if(in[i]=='\0'){
		out[j] = '\0';
		cout<<out<<endl;
		return;
	}
	
	
	// Including in[i]
	out[j] = in[i];
	generate_subset(in, out, i+1, j+1);
	
	
	// Excluding in[i]
	generate_subset(in, out, i+1, j);
}

int main(){
	char in[] = "abc";
	char out[10] = "";
	
	generate_subset(in, out, 0, 0);
}


