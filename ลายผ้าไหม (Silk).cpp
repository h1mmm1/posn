// LANG : C++
#include<bits/stdc++.h>
using namespace std;
char a[100][100];

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	memset(a,'.',sizeof a);
	char c;
	int n,m;
	cin >> c;
	cin >> n >> m;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if((i+j)%m==0) a[i][j]=c;
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout << a[i][j];
		}
		cout << "\n";
	}
}
