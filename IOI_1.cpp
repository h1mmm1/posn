// LANG : C++
#include<bits/stdc++.h>
using namespace std;
vector<int> g;
vector<int> rs;

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
  int n;
  cin >> n;
  for(int i=1;i<=n;i++){
    int o;
    cin >> o;
    g.push_back(o);
  }
  for(int i=1;i<=n;i++){
    int o;
    cin >> o;    
    rs.push_back(o);
  }
  sort(g.begin(),g.end());
  sort(rs.begin(),rs.end());
  int j=0,sum=0;
  for(int i=0;i<n;i++){
    if(g[i]>rs[j]) sum+=1,j+=1;
  }
  cout << sum;
}
/*
grammy    rs
1600    1700
1873    1860
1900    2120
2134    2450
*/
