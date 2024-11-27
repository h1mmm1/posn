// LANG : C++
#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	int ans=-1;
	int a;
	string s;
	cin >> s;
	for(int i=0;i<s.size();i++){
		s[i]-='0';
		a=s[i];
		ans=max(ans,a);
	}
	cout << ans;
}
