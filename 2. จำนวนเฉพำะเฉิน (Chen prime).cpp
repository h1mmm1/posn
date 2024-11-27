// LANG : C++
#include<bits/stdc++.h>
using namespace std;
bool a[20000005];
bool pq[20000005];
vector<int> b;
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	a[1]=true;
	a[0]=true;
  for(int i=2;i<=20000000;i++){
    if(!a[i]){
      b.push_back(i);
      for(int j=2;i*j<=20000000;j++){
        a[i*j]=true;
      }
    }
  }
for(int i=0;i<b.size();i++){
  if(b[i]>sqrt(20000000)) break;
  for(int j=i;j<b.size();j++){
    if(b[i]*b[j]>20000000) break;
    pq[b[i]*b[j]]=true;
  }
}
  
  
  int n,m,sum=0;
  cin >> n >> m;
  for(int i=n;i<=m;i++){
    if(!a[i]&&!a[i+2]) sum+=1;
    else if(!a[i] && pq[i+2]) sum+=1;
  }
  cout << sum;
}

