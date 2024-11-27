//LANG : C++
#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	int x,y;
	cin >> x >> y;
	int ans=x*x*x*x+x*x*x+2*x+y;
	cout << ans;
}
