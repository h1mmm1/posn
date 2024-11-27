/* LANG : C++ */
#include<bits/stdc++.h>
using namespace std;
char a[150][150];

void lozeng(int n,char c,int x, int y){
  for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
					if(abs(i-(n+1)/2)+abs(j-(n+1)/2)<=n/2) a[i+x][j+y]=c;
				}
			}
}

void xx(int n,char c){
  for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
      if(i==j || i+j==n+1) a[i][j]=c;
    }
  }
}

void print(int n,int m){
  for(int i=1;i<=n;i++){
    for(int j=1;j<=m;j++){
      cout<<a[i][j];
    }
    cout<<"\n";
  }
}

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
  memset(a,'.',sizeof a);
	char c;
	cin >> c;
	int n,m;
	cin >> n >> m;
	for(int i=0;i<m;i++){
		for(int j=0;j<m;j++){
			lozeng(n,c,i*(n),j*(n));
		}
	}
  xx(m*n,'#');
  print(m*n,m*n);	
}

