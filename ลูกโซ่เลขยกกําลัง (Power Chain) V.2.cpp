/* LANG : C++ */
#include<bits/stdc++.h>
using ll=long long int;
using namespace std;
int n[5005];
int lis[5005];

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
  int m;
  cin >> m;
  for(int i=1;i<=m;i++){
    cin >> n[i];
  }
  sort(n+1,n+m+1);
  int ans=0;
  for(int i=1;i<=m;i++){
    lis[i]=1;
    for(int j=1;j<i;j++){
      if(n[i]%n[j]==0){
        int x=lis[j]+1;
        if(x>lis[i]) lis[i]=x;
      }
    }
    if(lis[i]>ans) ans=lis[i];
  }
  cout<<ans;
}

