// LANG : C++
#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	int x,y,z;
	cin >> x >> y >> z;
	int n=y+z;
	while(n>=60){
		n-=60;
		x+=1;
		if(x>=24) x=0;
	}
	if(x<10) cout << '0' << x << ' ';
	else cout << x << ' ';
	if(n<10) cout << '0' << n;
	else cout << n;
}
