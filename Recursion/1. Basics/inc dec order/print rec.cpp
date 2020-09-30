#include<bits/stdc++.h>
using namespace std;

void printDec(int n){
	cout<<n<<" ";
	// Base Case 
	if(n==1) return;
	printDec(n-1);
}

//void printDec(int n){
//	// Base Case 
//	if(n==0) return;
//	
//	cout<<n<<" ";
//	printDec(n-1);
//}


void printInc(int n){
	// Base Case
	if(n==1){
		cout<<n<<" ";
		return;
	}
	printInc(n-1);
	cout<<n<<" ";
}

//void printInc(int n){
//	// Base Case
//	if(n==0){
//		return;
//	}
//	printInc(n-1);
//	cout<<n<<" ";
//}

int main(){
	printDec(5); cout<<endl;
	printInc(5);
}


