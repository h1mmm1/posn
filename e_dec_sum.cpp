/* LANG : C++ */
#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	int sum=0;
	string a;
	cin >> a;
	for(int i=0;i<a.size();i++){
		sum=(sum+a[i]-'0');
	}
	cout << sum;
}
