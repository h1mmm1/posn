/* LANG : C++ */
#include<bits/stdc++.h>
using namespace std;
char a[1500][1500];

void panoda(int n,char c,int x, int y){
  for(int i=1;i<=n;i++){
			for(int j=1;j<=2*n-1;j++){
					if(i+j>=n+1 && j-i<=n-1 ) a[i+x][j+y]=c;
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
		for(int j=0;j<i+1;j++){
			panoda(n,c,i*n,j*2*n+(m-i-1)*n);
		}
  }
  
  print(n*m,m*2*n);	
}

