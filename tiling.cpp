/* LANG : C++ */
#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	int t;	
	cin >> t;
	for(int i=0;i<t;i++){
		int n,m;
		cin >> n >> m;
		int j=0;
		while(j*j<=n && j*4+4<=m){
			j++;	
		}	
		j-=1;
		cout << j+2 << "\n";
    }
}
