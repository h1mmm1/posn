//LANG : C++
#include<bits/stdc++.h>
using namespace std;
int a[5][5];
int b[5][5];

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	for(int i=1;i<=2;i++){
		for(int j=1;j<=3;j++){
			cin >> a[i][j];
		}
	}
	for(int i=1;i<=2;i++){
		for(int j=1;j<=3;j++){
			cin >> b[i][j];
		}
	}	
	for(int i=1;i<=2;i++){
		for(int j=1;j<=3;j++){
			cout << a[i][j]+b[i][j] << ' ';
		}
		cout << "\n";
	}	
}
