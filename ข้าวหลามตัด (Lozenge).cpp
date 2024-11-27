/* LANG : C++ */
#include<bits/stdc++.h>
using namespace std;
char a[150][150];
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	char c;
	cin >> c;
	int n,m;
	cin >> n >> m;
	for(int h=1;h<=m;h++){
		for(int i=1;i<=n;i++){
			for(int k=1;k<=m;k++){
				for(int j=1;j<=n;j++){
					if(i+j>=n/2+2 && j-i<=n/2 && i-j<=n/2 && i+j<=n+n/2+1) a[i][j]=c;
				}
			}
		}
	}
	for(int h=1;h<=m;h++){
		for(int i=1;i<=n;i++){
			for(int k=1;k<=m;k++){
				for(int j=1;j<=n;j++){
					if(a[i][j]=='\0') cout << '.';
					else cout << a[i][j];
				}
			}
			cout << "\n";
		}
	}	
}
