// lANG : C++
#include<bits/stdc++.h>
using namespace std;
using pii=pair<int,int>;
priority_queue<pii,vector<pii>,greater<pii>> q;

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	int c,ans=0;
	cin >> c;
	for(int i=1;i<=c;i++){
		int n,m;
		cin >> n >> m;
		q.push({n+m,n});
	}
	while(!q.empty()){
		int x=q.top().first;
		int y=q.top().second;
		q.pop();
		while(x>q.top().second && !q.empty()) q.pop();
		ans++;		
	}
	cout << ans;

}
