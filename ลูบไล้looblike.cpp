//LANG : C++
#include<bits/stdc++.h>
using namespace std;
int a[10005];

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	int n,mx=0;
	cin >> n;
	for(int i=1;i<=n;i++){
		int m;
		cin >> m;
		a[m]++;
		mx=max(mx,a[m]);
	}
	for(int i=1;i<=10000;i++){
		if(a[i]==mx) cout << i << ' ';
	}
}
