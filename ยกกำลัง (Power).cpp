/* LANG : C++ */
#include<bits/stdc++.h>
using ll=long long int;
using namespace std;

ll modpow(ll n, ll d, ll p){
  ll a=1;
  n%=p;
  while(d){
    if(d%2==1){
      a*=n;
      a%=p;
    }
    n*=n;
    n%=p;
    d/=2;
  }
  return a;
}

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
  int a;
  cin >> a;
  for(int i=1;i<=a;i++){
    int n,d,p,ans;
    cin >> n >> d  >> p;
    int x=pow(10,p);
    ans=modpow(n,d,x);
    string z;
    z=to_string(ans);
    if(z.size()<p) for(int i=1;i<=p-z.size();i++) cout << "0";
    cout << z << "\n";
  }
}

