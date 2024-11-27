#include<bits/stdc++.h>
using namespace std;
string str;
int ans=0;

void rec(int n,int k){
  if(n==0){
    ans++;
    return;
  }

  str+='1';
  rec(n-1,k);
  str.pop_back();
  if(str.back()!='0' && k>0){
    str+='0';
    rec(n-1,k-1);
    str.pop_back();
  }
}

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
  int n,k;
  cin >> n >> k;
  rec(n,k);
  cout << ans;
}
