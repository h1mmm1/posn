/* LANG : C++ */
#include<bits/stdc++.h>
using namespace std;
char x[50];


int main(){
	ios::sync_with_stdio(0); cin.tie(0);
  int a,b;
  int i=0;
  cin >> a >> b;  
  while(a>0){
    if(a%b>9 ) x[i]='A'+a%b-10;
    else x[i]=('0'+a%b);
    i++;
    a/=b;  
  }
  for(int j=i-1;j>=0;j--){
    cout <<  x[j];
  }
} 

