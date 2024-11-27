//https://vjudge.net/contest/197330#problem/L
#include<bits/stdc++.h>
using namespace std;
bool a[300005];

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	
  for(int i=2;i<=300000;i++){
    if(!a[i]){
      for(int j=2;i*j<=300000;j++){
        a[i*j]=true;
      }
    }
  }
  int n;
  cin >> n;
  while(n--){
    int m,sum=0;
    cin >> m;
    for(int i=2;i<=m/2;i++){
      if(!a[i]&&!a[m-i]) sum+=1;
    }
    cout << sum << "\n";
  }
  
}

