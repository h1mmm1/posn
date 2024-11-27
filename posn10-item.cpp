// LANG : C++
#include<bits/stdc++.h>
using namespace std;
pair<double,int> item[30000];
unordered_map<int,int> mp;
int p[30000];
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	int n,cnt=1;
	double xx;
	cin >> n;
	for(int i=1;i<=n;i++){
		double bi,pi;
		cin >> bi >> pi;
    p[i]=pi;
		xx=bi/pi;
		item[i]={xx,-i};
	}
	sort(item+1,item+n+1,greater<pair<double,int>>());
  int sum=0;
  for(int i=1;i<=3;i++){
    int m=-1*item[i].second;
    sum+=p[m];
  }
  cout<<sum<<"\n";
  for(int i=1;i<=3;i++){
    int m=-1*item[i].second;
    cout<<m<<"\n";
  }
	
	
}
/*
6
0 521
442 210
480 100
120 108
619 744
48 10
*/
