/* LANG : C++ */
#include<bits/stdc++.h>
using namespace std;
char a[1500][1500];
int  b[1500];
char c[1500];

void diamond(int n,string s,int x, int y){
  for(int i=1;i<=2*n-1;i++){
			for(int j=1;j<=2*n-1;j++){
        int diff=abs(i-n)+abs(j-n);
					if(diff<=n-1) a[i+x][j+y]=s[n-1-diff];
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
  for(char i='A';i<='Z';i++){
    if(b[i]>0) s+=(i);
  }
  n=s.size();

  
	for(int i=0;i<1;i++){
		for(int j=0;j<1;j++){
			diamond(n,s,i*(2*n-1),j*(2*n-1));
		}
  }
  
  print(2*n-1,2*n-1);	
  
}

