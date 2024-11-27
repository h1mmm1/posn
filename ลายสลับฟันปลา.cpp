#include<bits/stdc++.h>
using namespace std;
char a[50][50]; 

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	char x,y;
	int n,m,o;
	cin >> x >> y;	
	cin >> n >> m >> o;
  for(int h=1;h<=o;h++){
	  for(int i=1;i<=n;i++){
		  for(int k=1;k<=m;k++){
			  for(int j=1;j<=2*n;j++){
				  if(i-j==0 || i+j==2*n+1) a[i][j]=x;
				  if(i+j==n+1 || j-i==n) a[i][j]=y;
			  }
		  }
	  }    
  }
  for(int h=1;h<=o;h++){
	  for(int i=1;i<=n;i++){
		  for(int k=1;k<=m;k++){
			  for(int j=1;j<=2*n;j++){
				  if(a[i][j]=='\0') cout << '.';
				  else cout << a[i][j];
			  }
		  }
		  cout << "\n";		
	  }    
  }
}
