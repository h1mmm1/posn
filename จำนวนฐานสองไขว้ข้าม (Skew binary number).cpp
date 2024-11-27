// LANG : C++
#include<bits/stdc++.h>
using namespace std;
string s;
int sum=0,ans=0;
void res(int n,int m, int a,bool p){
  if(n==0 && m==0 && p==true){
    sum++;
    if(sum==a){
      for(int i=s.size();i>0;i--){
        ans+=(s[s.size()-i]-'0')*(pow(2,i)-1);
      }
      cout << ans;
      exit(0);
    }
    return;
  }
  
  if(n>0){
    s+='0';
    res(n-1,m,a,p);
    s.pop_back();
  }
  if(m>0 && p==false){
    s+='1';
    res(n,m-1,a,p);
    s.pop_back();
  }
  if(p==false){
    s+='2';
    res(n,m,a,true);
    s.pop_back();  
  }
  
  

}

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	int n,m,a;
  cin >> n >> m >> a;
  bool p=false;
  res(n,m,a,p);
  cout << "NONE";
}
