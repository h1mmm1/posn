//LANG : C++
#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	int n;
	cin >> n;
	cout << n/15 << "\n";
	n%=15;
	cout << n/10 << "\n";
	n%=10;
	cout << n/7 << "\n";
	n%=7;
	cout << n/5 << "\n";
	n%=5;
	cout << n/1 << "\n";
}
