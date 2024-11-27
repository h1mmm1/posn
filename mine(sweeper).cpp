// LANG : C++
#include<bits/stdc++.h>
using namespace std;
int dx[8]={0,0,1,1,1,-1,-1,-1};
int dy[8]={1,-1,0,1,-1,0,1,-1};
int aa[105][105];
bool vis[105][105];
queue<pair<int,int>> q;

int main(){
	ios::sync_with_stdio(0); cin.tie(0);	
	int n,a,b;
	cin >> n >> a >> b;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			char c;
			cin >> c;
			if(c=='*'){
				for(int k=0;k<8;k++){
					int x=i+dx[k];
					int y=j+dy[k];
					aa[x][y]+=1;
				}
			}
		}
	}
	int ans=0;
	q.push({b,a});
	vis[b][a]=true;
	while(!q.empty()){
		int x=q.front().first;
		int y=q.front().second;
		q.pop();
		if(aa[x][y]!=0) continue;
		for(int i=0;i<8;i++){
			int xx=x+dx[i];
			int yy=y+dy[i];
			if(xx<1 || yy<1 || xx>n || yy>n) continue;
			if(vis[xx][yy]==false){
				ans+=aa[xx][yy];
				vis[xx][yy]=true;
				q.push({xx,yy});
			}
		}
	}
	cout << ans <<"\n";
	/*
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cout << aa[i][j] << ' ';
		}
		cout << "\n";
	}
*/
}
