// LANG : C++
#include <bits/stdc++.h>
using namespace std;
using ll=long long int;
ll f[20];

int main() {
	ios::sync_with_stdio(0);cin.tie(0);
	f[0]=1;
  ll y=1;
  for(int i=1;i<=16;i++){
    y*=i;
    f[i]=y;
  }
  int x=3;
  while(x--){
    ll q;
    ll n,m;
    cin >> n >> m;
    if(m+1<n){
      cout << '0' << "\n";
    } 
    else{
      q=f[m+1]/f[n];
      q/=f[m+1-n];
      cout << q << "\n";
    }
  }
}

