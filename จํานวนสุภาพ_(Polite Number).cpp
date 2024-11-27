#include<bits/stdc++.h>
using namespace std;
bool impolite[505000];


int main(){
	ios::sync_with_stdio(0); cin.tie(0);
  int a=1;
  for(int i=1; ;i++){
    impolite[a]=true;    
    a*=2;
    if(a>500000) break;
  }
  int n;
  cin >> n;
  for(int i=0;i<n;i++){
    int m,ans=0;
    cin >> m;
    for(int j=1;j<=m/2;j++){
      if(impolite[j]==false && impolite[m-j]==false) ans+=1;
    }
    cout << ans << '\n';
  }
}

