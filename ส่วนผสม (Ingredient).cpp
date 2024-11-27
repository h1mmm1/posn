// LANG : C++
#include<bits/stdc++.h>
using namespace std;
int a[9];
int sum[222];

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
  int c;
  cin >> c;
  while(c--){
    int n,m;
    cin >> n >> m;
    for(int i=1;i<=n;i++){
      cin >> a[i];
    }
    sum[0]=1;
    for(int i=1;i<=n;i++){
      for(int j=1;j<=m;j++){
        if(j-a[i]>=0) sum[j]+=sum[j-a[i]];
      }
    }
    cout << sum[m] << "\n";
    memset(sum,0,sizeof sum);
  }
}

