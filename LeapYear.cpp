/* LANG : C++ */
#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	int n;
	cin >> n;
	if(n%4==0 && n%100==0 && n%400==0) cout << "Yes";	
	else if(n%4==0 && n%100==0) cout << "No";
	else if(n%4==0) cout << "Yes";
	else cout << "No";	
}
