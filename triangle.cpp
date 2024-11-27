/* LANG : C++ */
#include<bits/stdc++.h>
using namespace std;
char a[1500][1500];
int  b[60000];
char c[60000];

void triangle(int n,string s,int x, int y){
  for(int i=1;i<=n;i++){
			for(int j=1;j<=2*n-1;j++){
					if(i+j>=n+1 && j-i<=n-1) a[i+x][j+y]=s[i-1];
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
  memset(a,' ',sizeof a);
  int n;
  cin >> n;
  for(int i=0;i<n;i++){
    cin >> c[i];
    b[c[i]]++;
  }
  string s;
  for(int i=0;i<26;i++){
    if(b[i+'A']>0) s+=('A'+i);

  }
    //cout << s <<  '\n';  
  n=s.size();

  
	for(int i=0;i<2;i++){
		for(int j=0;j<i+1;j++){
			triangle(n,s,i*n,j*2*n+(2-i-1)*n);
		}
  }
  
  print(2*n,4*n-1);	
  
}

