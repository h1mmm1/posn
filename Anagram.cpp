// LANG : C++
#include<bits/stdc++.h>
using namespace std;
int mp[300];

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
  int n,sum=0;
  cin>>n;
  string a,b;
  getline(cin,b);//clear after cin
  getline(cin,a);
  getline(cin,b);
  //cout<<"a = "<<a<<"\n\n";
  //cout<<"b = "<<b<<"\n\n";
  for(int i=0;i<a.size();i++){
    if('a'<= a[i] && a[i]<='z') a[i]=a[i]+'A'-'a';
    if(a[i]!=' ') mp[a[i]]++;
  }
  for(int i=0;i<b.size();i++){
    if('a'<=b[i] && b[i]<='z') b[i]=b[i]+'A'-'a';
    if(b[i]!=' ') mp[b[i]]--;  
  }
  for(char i='A';i<='Z';i++){
  	if(mp[i]!=0) sum+=abs(mp[i]);
  }
  if(sum>n) cout << "no";
  else cout << "yes";
}
