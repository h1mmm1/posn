/* LANG : C++ */
#include<bits/stdc++.h>
using namespace std;
bool a[10001000];
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
  for(int i=2;i<10001000;i++){
   if(a[i]==false){
     for(int j=2*i;j<10001000;j+=i){
       a[j]=true;
     }
   }
  }
  int n;
  cin >> n;
  for(int i=1;i<=n;i++){
    int m;
    cin >> m;
    for(int j=m;j<100001000;j++){
      if(a[j]==false && a[j+2]==false){
        cout << j << ' ' << j+2 << "\n";
        break;
      }
    }
  }
  
}


