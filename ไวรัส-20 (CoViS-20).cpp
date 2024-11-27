// LANG : C++
#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	int a,x=0;
  cin >> a;
  string str;
  cin >> str;
  int n;
  cin >> n;
  for(int i=0;i<str.size();i++){
    x+=str[i]-'0';
  }
  x%=26;
  for(int i=0;i<n;i++){
    
    string s,ans="";
    cin >> s;
    for(auto e:s){
     int y=int(e);
     if('A'<=char(x+y) && char(x+y)<='Z'){
       ans+=char(x+y);
     }
     else{
       ans+=char(x+y-26);
     }      
    }
  cout << ans << "\n";
  }
}
