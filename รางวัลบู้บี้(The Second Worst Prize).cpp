// LANG : C++
#include <bits/stdc++.h>
using namespace std;
int m[10050];
int mp[10050];

int main() {
	ios::sync_with_stdio(0);cin.tie(0);
	int c;
  cin >> c;
  for(int i=0;i<c;i++){
    int n;
    cin >> n >> m[i];
    mp[m[i]]=n;
  }
  sort(m,m+c);
  cout << mp[m[2-1]] << ' ' << m[2-1];
}

