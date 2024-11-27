// LANG : C++
#include <bits/stdc++.h>
using namespace std;
int f[13];

int main() {
	ios::sync_with_stdio(0);cin.tie(0);
  int x=1;
  for(int i=1;i<=12;i++){
    x*=i;
    f[i]=x;
  }
  int m;
  cin >> m;
  for(int j=1;j<=m;j++){
    int n;
    cin >> n;
    string s;
    for(int i=12;i>=1;i--){
        s+=(n/f[i])+'0'; 
        n%=f[i];
    }
    for(int k=0;k<s.size();k++){
      if(s[k]!='0'){
        for(int y=k;y<s.size();y++){
          cout << s[y];
        }
        break;
      }
    }
    cout << "\n";
      
  }

}

