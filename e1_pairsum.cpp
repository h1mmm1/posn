/* LANG : C++ */
#include<bits/stdc++.h>
using namespace std;
bool mp[2000005];

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	int n,m;
	cin >> n >> m;
	int x[n];
	for(int i=0;i<n;i++){
		cin >> x[i];
		mp[x[i]]=true;
	}
	for(int i=0;i<m;i++){
		int b,c=0;
		cin >> b;
		for(int j=0;j<n;j++){
			if(b>=x[j] && mp[b-x[j]]==true){
					c=1;
					break;
			}			
		}
		if(c==1) cout << "YES" <<"\n";				
		else cout << "NO" << "\n";		
	}
}
