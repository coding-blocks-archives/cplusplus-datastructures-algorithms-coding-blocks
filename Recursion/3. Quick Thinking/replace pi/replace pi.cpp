// Replace "pi" with 3.14

#include<bits/stdc++.h>
using namespace std;

void replace(char a[], int s, int e){
	// Base case
	if(s>=e) return;
	
	int i=s;
	for(i=s; i<e-1; i++){
		if(a[i]=='p' && a[i+1]=='i'){
			// Replacing 
			for(int j=e; j>i+1; j--){
				a[j+2] = a[j];
			}
			a[i]='3'; a[i+1]='.'; a[i+2]='1'; a[i+3]='4';
			
			replace(a, i+4, e+4);
			break;
		}
	}
	
	
}

int main(){
	char a[100]="xpighpilmpipi";
	
	int n=0; while(a[n]!='\0') n++;
	
	replace(a,0, n);
	cout<<a;
}


