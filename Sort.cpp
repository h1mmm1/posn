// LANG : C++
#include <bits/stdc++.h>
using namespace std;
vector<int> m;
int mp[105];

int main() {
	ios::sync_with_stdio(0);cin.tie(0);
	int c;
  cin >> c;
  for(int i=1;i<=c;i++){
    int n;
    cin >> n;
    m.push_back(n);
    mp[n]=i;
  }
  sort(m.begin(),m.end());
  for(int i=1;i<=c;i++){
    cout << mp[m[i-1]] << ' ';
  }
  cout << "\n";
  for(int i=1;i<=c;i++){
    if(m[i-1]>=80) cout << 'A' << ' ';
    else if(m[i-1]>=70) cout << 'B' << ' ';
    else if(m[i-1]>=60) cout << 'C' << ' ';
    else if(m[i-1]>=50) cout << 'D' << ' ';
    else cout << 'F' << ' ';
  }
}

