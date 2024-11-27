/* LANG : C++ */
#include<bits/stdc++.h>
using namespace std;
bool a[300000];
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
  for(int i=2;i<300000;i++){
   if(a[i]==false){
     for(int j=2*i;j<300000;j+=i){
       a[j]=true;
     }
   }
  }
  int n;
  cin >> n;
  for(int i=1;i<=n;i++){
    int m,c=0;
    cin >> m;
    for(int j=2;j<=m/2;j++){
      if(a[j]==false){
        int x=m-j;
        if(a[x]==false){
          c+=1;
        }
        
      }
    }
    cout << c << "\n";
  }
  
}


