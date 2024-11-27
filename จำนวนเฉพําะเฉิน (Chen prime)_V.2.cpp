#include<bits/stdc++.h>
using namespace std;
bool a[20000500];
bool pq[20000500];
vector<int> p;
 
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
  a[1]=true;
  for(int i=2;i<20000500;i++){
    if(a[i]==false){
      p.push_back(i);
      for(int j=2;i*j<20000500;j++){
        a[i*j]=true;
      }
    }
  }

  for(int i=0;i<p.size();i++){
    if(p[i]>sqrt(20000000)) break;
    for(int j=i;j<p.size();j++){
      if(p[i]*p[j]>20000000) break;
      int x=p[i]*p[j];
      pq[x]=true;
    }
  }
  int n,m,sum=0;
  cin >> n >> m;
  for(int i=n;i<=m;i++){
    if(a[i]==false && a[i+2]==false ) sum+=1;
    else if(a[i]==false && pq[i+2]==true) sum+=1;
  }
  cout << sum;
}

