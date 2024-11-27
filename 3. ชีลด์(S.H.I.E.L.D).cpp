/* LANG : C++ */
#include<bits/stdc++.h>
using namespace std;
char a[105][105];
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	char c;	
	int n;
	cin >> c;	
	cin >> n;
	for(int i=1;i<=2*n+1;i++){
		for(int j=1;j<=2*n+1;j++){
			if(i+j>=n+2 && j-i<=n && i-j<=n && i+j<=3*n+2) a[i][j]=c;			
			if(i==n+1 || j==n+1 || i-j==0 || i+j==2*n+2) a[i][j]='+';
		}
	}
	for(int i=1;i<=2*n+1;i++){
		for(int j=1;j<=2*n+1;j++){
			if(a[i][j]=='\0') cout << '.';
			else cout << a[i][j];
		}
		cout << "\n";
	}
}
