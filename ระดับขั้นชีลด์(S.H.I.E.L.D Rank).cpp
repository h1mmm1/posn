/* LANG : C++ */
#include<bits/stdc++.h>
using namespace std;
char a[2000][2000]; 

void f(int n, char c, int x, int y){
  for(int i=1;i<=2*n+1;i++){
		for(int j=1;j<=2*n+1;j++){
			if(abs(i-n-1)+abs(j-n-1)<=n) a[i+x][j+y]=c;
		}
	}

  for(int i=1;i<=2*n+1;i++){
    a[i+x][n+1+y]='+';
    a[n+1+x][i+y]='+';
    a[i+x][i+y]='+';
    a[i+x][2*n+2-i+y]='+';
  }

  

}

void print(int N, int M, char c){
  for(int i=1;i<=N;i++){
			  for(int j=1;j<=M;j++){
				  if(a[i][j]=='\0') cout << c;
				  else cout << a[i][j];
			  }
		  cout << "\n";		    
    }
}

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	char x;
	int n,m;
	cin >> x;	
	cin >> n >> m;
   for(int i=0;i<m;i++){
    for(int j=0;j<m;j++){
     f(n,x,i*(2*n+1),j*(2*n+1)); 
    }
  }

  for(int i=1;i<=(2*n+1)*m;i++){
    a[i][i]='#';
    a[i][1+(2*n+1)*m-i]='#';
  }

//  for(int i=1;i<=n*l;i++){
 //   a[i][i]='#';
 //   a[i][n*l+1-i]='#';
 // }
  
	print((2*n+1)*m,(2*n+1)*m,'.');
}
