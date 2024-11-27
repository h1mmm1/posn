// LANG : C++
#include<bits/stdc++.h>
using namespace std;
string s[1050];
int a[1050];

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
  int n;
  cin >> n;
  for(int i=1;i<=n;i++){
    cin >> s[i];
    if(s[i]=="PUSH") cin >> a[i];
    else if(s[i]=="IFZERO") cin >> a[i];
  }
  for(int i=1;i<=n;i++){
    if(s[i]=="")
  }
}

