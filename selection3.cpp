//LANG : C++
#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	int n;
	cin >> n;
	if(n>=41) cout << n+50;
	else if(n>=31 && n<=40) cout << n+40;
	else if(n>=21 && n<=30) cout << n+30;
	else if(n>=11 && n<=20) cout << n+20;
	else cout << n+10;
}
