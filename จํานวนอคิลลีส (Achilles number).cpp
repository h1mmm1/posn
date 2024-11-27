// LANG : C++
#include<bits/stdc++.h>
using namespace std;

 const int N=2e7;

vector<int> perfect;
vector<int> powerful;
bool pwf[N+5]; 
bool pf[N+5];



int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	pf[1]=true;
  int M=sqrt(N);
  for(int i=2;i<=M;i++){
    long long int x=i;
    for(int j=2;   ;j++){
      x*=i;
      if(x>N) break;      
      pf[x]=true;
    }
  }
  
  for(long long int b=1;b*b*b<=N;b++){
    long long int m=N/(b*b*b);
    for(long long int a=1;a*a<=m;a++){
      long long int x=b*b*b*a*a;
      if(pwf[x]==false){
        powerful.push_back(x); 
        pwf[x]=true;
      }
    }
  }
  sort(powerful.begin(),powerful.end());
  //cout<<powerful.size()<<"\n";
  int ans=0;
  int n,m;
  cin >> n >> m;
  
  for(auto e:powerful){
    if(e>=n && e<=m){
      if(pf[e]==false) ans++;      
    }
    if(e>m) break;
  }
  cout << ans;

  
  /*
  int u=0;
  for(int e:hpw){
    cout << e << ' ';
    u++;
    if(u>100) break;
  }
  cout << "\n\n" << powerful.size() << "\n" << hpw.size();
  */
}
