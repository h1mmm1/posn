// LANG : C++
#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	long long int n,ans=1;
	cin >> n;
	for(long long int i=0;i<n;i++){
		long long int m;
		cin >> m;
		ans=ans*m/__gcd(ans,m);
	}
	cout << ans;
}
