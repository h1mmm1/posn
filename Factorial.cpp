/* LANG : C++ */
#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	int n,sum=1;
	cin >> n;
	for(int i=1;i<=n;i++){
		sum*=i;
	}
	cout << sum;
}
