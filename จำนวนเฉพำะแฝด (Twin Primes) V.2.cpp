#include<bits/stdc++.h>
using namespace std;
bool a[10001005];

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	
  for(int i=2;i<=10001000;i++){
    if(!a[i]){
      for(int j=2;i*j<=10001000;j++){
        a[i*j]=true;
      }
    }
  }

  
    int n;
	cin >> n;
	for(int i=1;i<=n;i++){
    int m;
    cin >> m;
    for(int j=m; ;j++){
      if(!a[j]&&!a[j+2]) {
        cout << j << ' ' << j+2 << "\n";
        break;
      }
    }
  }
}
