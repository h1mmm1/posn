// LANG : C++
#include<bits/stdc++.h>
using namespace std;
using pii=pair<int,int>;
using piii=pair<char,char>;
priority_queue<pii,vector<pii>,greater<pii>> q;
vector<pii> g[30];
vector<piii> C[30];
bool vis[30];
int dis[30];

 
int main(){
	ios::sync_with_stdio(); cin.tie(0);
	for(int i=0;i<30;i++){
		dis[i]=INT_MAX;
	}
	int n,mx=0;
	cin >> n;
	for(int i=1;i<=n;i++){
		char a,b;
		int x,y,c;
		cin >> a >> b >> c;
		x=int(a-65);
		y=int(b-65);		
		mx=max(mx,x);
		mx=max(mx,y);
		g[x].push_back({y,c});
		g[y].push_back({x,c});
		C[c].push_back({a,b});
	}
	dis[0]=0;
	q.push({dis[0],0});
	while(!q.empty()){
		int l=q.top().first;
		int x=q.top().second;
		q.pop();
		if(vis[x]==true) continue;
		vis[x]=true;
		for(auto e:g[x]){
			int xx=e.first;
			int ll=e.second;
			if(vis[xx]==false && dis[xx]>ll){
				dis[xx]=ll;
				q.push({dis[xx],xx});
			}
		}
	} 
	sort(dis+1,dis+mx+1);
	for(int i=1;i<30;i++){
		if(dis[i]==INT_MAX) continue;
		for(auto e:C[dis[i]]) cout << e.first << ' ' << e.second << ' ';
	    cout << dis[i] << "\n";
	}
}
/*
10
A B 4
B H 5
A H 6
B E 2
E F 8
F G 3
F H 10
G H 14
B C 9
E D 15 
*/

/*
10
A B 5
B H 5
A H 5
B E 5
E F 5
F G 5
F H 5
G H 5
B C 5
E D 5 
*/
