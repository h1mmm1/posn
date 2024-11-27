//LANG : C++

#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	float ans=0;
	int m=5;
	while(m--){
		float n;
		cin >> n;
		ans+=n;
	}
	ans/=5;
	cout <<   fixed << setprecision(6) << ans;
}
