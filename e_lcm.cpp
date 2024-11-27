/* LANG : C++ */
#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	int a,b,sum;
	cin >> a >> b;
	sum=a*b/__gcd(a,b);
	cout << sum;
}
