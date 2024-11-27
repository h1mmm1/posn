/* LANG : C++ */
#include<bits/stdc++.h>
using namespace std;
char a[1500][1500];

void trophy(int n,char c,int x, int y){
  for(int i=1;i<=n;i++){
			for(int j=1;j<=2*n;j++){
        	if(i<j && i+j<2*n) a[i+x][j+y]=c;
        	else if(i==j || i+j==2*n) a[i+x][j+y]='#';
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
  string s;
  cin >> s;  
  int n,m=s.size();
  cin >> n;

  
  
	for(int i=0;i<m;i++){
		for(int j=0;j<m-i;j++){
			trophy(n,s[i],i*(n),j*(2*n)+i*n);
		}
  }
  
  print(m*n,m*2*n);	
  
}

