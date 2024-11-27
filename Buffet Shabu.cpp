#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	int n,t;
	cin >> n >> t;
	if(t>=14 && t<=16){
		n=n*2/3*200+n%3*200;
	}
	else n=n*200;
	cout << n;
}
