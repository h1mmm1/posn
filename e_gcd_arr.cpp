/* LANG : C++ */
#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	int n,sum=0;
	cin >> n;
	for(int i=1;i<=n;i++){
		int a;
		cin >> a;
		sum=__gcd(sum,a);
	}
	cout << sum;
}
