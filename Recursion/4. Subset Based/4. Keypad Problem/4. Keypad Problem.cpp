#include<bits/stdc++.h>
#include<climits>
#include<algorithm>
#include<math.h>
#define ll long long
#define MAX 100000
using namespace std;

char keypad[][5] = {"", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wx", "yz"};
int counter=0;


void subsets(char *in, char *out, int i=0, int j=0){
	// Base Case
	// If i reaches end
	if(in[i]=='\0'){
		out[j] = '\0';
		cout<<out<<" "; 
		
		counter++;
		return;
	}
	
	// for every i, I can include either items from keypad[i]
	// in[i]
	int number = in[i] - '0'; 
//	int size = sizeof(keypad[number])/sizeof(keypad[number][0]);
	
	// Chooose from Keypad[number]
	
//	out[j] = keypad[number][0];
//	subsets(in, out, i+1, j+1);
//	
//	out[j] = keypad[number][1];
//	subsets(in, out, i+1, j+1);
//	
//	out[j] = keypad[number][2];
//	subsets(in, out, i+1, j+1);
	
	
	// For general case with any number of characters
	
	for(int i2=0; keypad[number][i2]!='\0'; i2++){
		out[j]  = keypad[number][i2];
		subsets(in, out, i+1, j+1);
	}
	
}


int main(){
	char in[MAX]; cin>>in;
	
	char out[MAX];
	
	subsets(in, out);
	cout<<endl<<counter;
}


