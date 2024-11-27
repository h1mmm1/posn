#include<bits/stdc++.h>
using namespace std;
char a[2000][2000]; 

void f(int n, char c, char d, int x, int y){
  for(int i=1;i<=n;i++){
		for(int j=1;j<=2*n;j++){
			if(i-j==0 || i+j==2*n+1) a[i+x][j+y]=c;
			if(i+j==n+1 || j-i==n) a[i+x][j+y]=d;
		}
	}
}

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	char x,y;
	int n,m;
	cin >> x >> y;	
	cin >> n >> m;
    for(int i=0;i<m;i++){
   		f(n,x,y,0,2*n*i);    	
	}
 

	  for(int i=1;i<=n;i++){
			  for(int j=1;j<=2*n*m;j++){
				  if(a[i][j]=='\0') cout << '.';
				  else cout << a[i][j];
			  }
		  cout << "\n";		    
    }
}
