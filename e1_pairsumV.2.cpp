//LANG : C++
#include<bits/stdc++.h>
using namespace std;
int a[100005];
bool mp[1000050];

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	int n,m;
	cin >> n >> m;
	for(int i=1;i<=n;i++){
		cin >> a[i];
		mp[a[i]]=true;
	}
	for(int i=1;i<=m;i++){
		int x,chk=0;
		cin >> x;		
		for(int j=1;j<=n;j++){
			if(x>a[j] && mp[x-a[j]]==true){
				chk=1;
				 break;
			} 
		}		
		if(chk==1) cout << "YES" << "\n";
		else cout << "NO" << "\n";		
	}

}
