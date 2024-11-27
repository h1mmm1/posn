/* LANG : C++ */
#include<bits/stdc++.h>
using namespace std;
char x[50];


int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	int n;
	cin >> n;
	for(int k=0;k<n;k++){
    	int a;
    	int i=0;
    	cin >> a;
    	if(a==0) cout << a; 		  
    	while(a>0){
      		if(a%8>9) x[i]='A'+a%8-10;
      		else x[i]=('0'+a%8);
      		i++;
      		a/=8;  
    	}
   	 	for(int j=i-1;j>=0;j--){
   	   		cout <<  x[j];
   	 	}  	 	
   	   	cout << "\n";   	 	
    }

} 

