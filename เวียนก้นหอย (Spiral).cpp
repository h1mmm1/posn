#include<bits/stdc++.h>
using namespace std;
char a[45][45];

int main(){
	//ios::sync_with_stdio(0); cin.tie(0);
	memset(a,'.',sizeof a);
	int n,x,y,t,r;
	char c;
	cin >> n >> y >> x >> t >> r >> c;
	int cnt=1;
	y++;
	x++;
	for(int i=1;i<=t;i++){
		cnt++;
		if(r==0){
			if(i%4==1){
				for(int j=y;j<=y+cnt-1;j++){
					a[x][j]=c;
				}
				y=y+cnt-1;
			}
			else if(i%4==2){
				for(int j=x;j<=x+cnt-1;j++){
					a[j][y]=c;
				}
				x=x+cnt-1;
			}
		
			else if(i%4==3){
				for(int j=y-cnt+1;j<=y;j++){
					a[x][j]=c;
				}
				y=y-cnt+1;
			}	
			else{
				for(int j=x-cnt+1;j<=x;j++){
					a[j][y]=c;
				}
				x=x-cnt+1;
			}			
		}
		if(r==1){
			if(i%4==3){
				for(int j=y;j<=y+cnt-1;j++){
					a[x][j]=c;
				}
				y=y+cnt-1;
			}
			else if(i%4==2){
				for(int j=x;j<=x+cnt-1;j++){
					a[j][y]=c;
				}
				x=x+cnt-1;
			}
		
			else if(i%4==1){
				for(int j=y-cnt+1;j<=y;j++){
					a[x][j]=c;
				}
				y=y-cnt+1;
			}	
			else{
				for(int j=x-cnt+1;j<=x;j++){
					a[j][y]=c;
				}
				x=x-cnt+1;
			}			
		}
		
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cout << a[i][j];
		}
		cout << "\n";
	}
}
