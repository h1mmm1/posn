// LANG : C++
#include <bits/stdc++.h>
using namespace std;

deque<int> dq;

int main() {
	ios::sync_with_stdio(0);cin.tie(0);
  int m,k,n;
  string s,c;
  cin >> m >> k >> n >> s;
  for(int i=0;i<m;i++){
    dq.push_back(i);
  }
  for(int i=0;i<s.size();i++){
    if(s[i]=='A'){
      dq.push_back(dq.front());
      dq.pop_front();
    }
    else if(s[i]=='B'){
      int x=dq.front();
      dq.pop_front();
      dq.push_back(dq.front());
      dq.pop_front();  
      dq.push_front(x);
    }
  }
  for(int i=0;i<m;i++){
    if(i==k-1) cout << dq.front() << "\n";
    else if(i==k) cout << dq.front() << "\n";
    else if(i==k+1) cout << dq.front() << "\n";
    dq.pop_front();  
  }
}

