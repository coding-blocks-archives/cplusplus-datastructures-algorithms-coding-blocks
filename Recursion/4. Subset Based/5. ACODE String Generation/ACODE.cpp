#include<bits/stdc++.h>
#include<climits>
#include<algorithm>
#include<math.h>
#define ll long long
#define MAX 100000
using namespace std;

void subsets(char *in, char *out, int i=0, int j=0){
	// Base Case
	if(in[i]=='\0'){
		out[j] = '\0';
		cout<<out<<endl;
		return;
	}
	
	// Including i
	int digit = in[i] - '0';
	char ch = digit + 'A' - 1;
	out[j] = ch; 
	subsets(in, out, i+1, j+1);
	
	// Inlcuding i, i+1
	if(in[i+1]!='\0'){
		int a = in[i]-'0'; int b = in[i+1]-'0';
		int number = a*10 + b;
		if(number<=26){
			out[j] = number + 'A' - 1;
			subsets(in, out, i+2, j+1);
		}
		
	}
	
	
	
//	int a = in[i]-'0'; int b = in[i+1]-'0';
//	int pos = a*10 + b; char ch2 = pos + 'A' - 1; 
//	if(in[i+1]!='\0' && pos<=26){
//		out[j] = ch2;
//		subsets(in, out, i+2, j+1);
//	}
	
}

int main(){
	
	char in[MAX]; cin>>in;
	char out[MAX];
	
	subsets(in, out);
}


