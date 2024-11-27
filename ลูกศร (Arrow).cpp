// LANG : C++
#include<bits/stdc++.h>
using namespace std;
char a[120][26000];

void u(int n,char c,int y){
  for(int i=0;i<=2*n;i++) a[i][n+y]=c;
  for(int i=0;i<=n;i++) a[i][n-i+y]=c;
  for(int i=0;i<=n;i++) a[i][n+i+y]=c;
}
void d(int n,char c,int y){
  for(int i=0;i<=2*n;i++) a[i][n+y]=c;
  for(int i=n;i<=2*n;i++) a[i][i-n+y]=c;
  for(int i=n;i<=2*n;i++) a[i][3*n-i+y]=c;
}
void r(int n,char c,int y){
  for(int i=0;i<=2*n;i++) a[n][i+y]=c;
  for(int i=0;i<=n;i++) a[i][n+i+y]=c;
  for(int i=n;i<=2*n;i++) a[i][3*n-i+y]=c;
}
void l(int n,char c,int y){
  for(int i=0;i<=2*n;i++) a[n][i+y]=c;
  for(int i=n;i<=2*n;i++) a[i][i-n+y]=c;
  for(int i=0;i<=n;i++) a[i][n-i+y]=c;  
}

int main(){
  ios::sync_with_stdio(0); cin.tie(0);
  int n;
  cin >> n;
  char c;
  cin >> c;
  string k;
  cin >> k;
  for(int i=0;i<k.size();i++){
    if(k[i]=='U') u(n,c,(2*n+1)*i);
    else if(k[i]=='D') d(n,c,(2*n+1)*i);
    else if(k[i]=='L') l(n,c,(2*n+1)*i);
    else if(k[i]=='R') r(n,c,(2*n+1)*i);        
  }  
  for(int i=0;i<=2*n;i++){
    for(int j=0;j<(2*n+1)*k.size();j++){
      if(a[i][j]=='\0') cout << '.';
      else cout << a[i][j];
    }
    cout << '\n';
  }
}
