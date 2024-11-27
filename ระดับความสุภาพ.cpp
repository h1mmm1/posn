/* LANG : C++ */
#include<bits/stdc++.h>
using namespace std;
bool a[2000000];
int p[500000];
int k;
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
  for(int i=2;i<=2000000;i++){
    if(a[i]==false){
      p[k]=i;
      k++;
      for(int j=2*i;j<=2000000;j+=i){
        a[j]=true;
      }
    }
  }
  int n;
  cin >> n;
  for(int i=1;i<=n;i++){
    int m,cnt=1;
    cin >> m;
    for(int j=1;j<=k-1;j++){// j
      int sum=1;
      while(m%p[j]==0){
        m/=p[j];
        sum++;
      }
      cnt*=sum;
    }
    cout << cnt-1 << "\n";
  }
}
