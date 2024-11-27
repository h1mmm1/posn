// LANG : C++
#include <bits/stdc++.h>
using namespace std;
int mp[10050];
queue<int> q[15];

int main() {
	ios::sync_with_stdio(0);cin.tie(0);
	int x,y;
  cin >> x >> y;
  while(y--){
    int n,m;
    cin >> n >> m;
    mp[m]=n;
  }
  for(int i=1; ;i++){
    char c;
    cin >> c;
    if(c=='X') break;
    else if(c=='E'){
      int w;
      cin >> w;
      if(q[mp[w]].empty()) q[0].push(mp[w]);
      q[mp[w]].push(w);
    }
    else if(c=='D'){
      if(q[0].empty()){
        cout << "empty" << "\n";
        continue;
      }
      int u=q[0].front();
      cout << q[u].front() << "\n";
      q[u].pop();
      if(q[u].empty()) q[0].pop();
    }
  }
  cout << '0';
}
/*
2 6
1 41
1 42
1 43
2 201
2 202
2 203
E 41
E 201
D
E 202
E 42
E 43
D
E 203
D
D
D
X
*/
