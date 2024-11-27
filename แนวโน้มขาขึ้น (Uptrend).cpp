/* LANG : C++ */
#include<bits/stdc++.h>
using ll=long long int;
using namespace std;
int n[4005];
int lis[4005];

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
  int m;
  cin >> m;
  for(int i=1;i<=m;i++){
    cin >> n[i];
  }
  int ans=0;
  for(int i=1;i<=m;i++){
    lis[i]=1;
    for(int j=1;j<i;j++){
      if(n[i]>=n[j]){
        lis[i]=max(lis[i],lis[j]+1);
      }
    }
    if(lis[i]>ans) ans=lis[i];
  }
  cout << ans;
}
