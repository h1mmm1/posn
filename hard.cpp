// LANG : C++
#include <bits/stdc++.h>
using namespace std;
int a[105][105];

int main() {
	ios::sync_with_stdio(0);cin.tie(0);
	int n,m;
  cin >> n >> m;
  for(int i=1;i<=n;i++){
    for(int j=1;j<=m;j++){
      cin >> a[i][j];
    }
  }
  int c;
  cin >> c;
  while(c--){
    int e,r,t;
    cin >> e >> r >> t;
    if(e%2==0){
      for(int i=1;i<=n;i++){
        a[i][r]=t;
      }
    }  
    else{
      for(int i=1;i<=m;i++){
        a[r][i]=t;
      }
    } 
  }
  for(int i=1;i<=n;i++){
    for(int j=1;j<=m;j++){
      cout << a[i][j]<< ' ';
    }
    cout << "\n";
  }
}
/*
3 4
1 2 3 4
5 0 0 8
9 10 11 12
3
1 2 13
2 1 14
2 4 15 
*/

