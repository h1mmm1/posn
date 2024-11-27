// LANG : C++
#include<bits/stdc++.h>
using namespace std;
string str,s;
int ans=0; 
inline void res(int n){
	if(n==0){
		if(str.find(s)!=-1){
			ans++;	
		} 
		return;
	}
	str+='1';
	res(n-1);
	str.pop_back();
	str+='0';
	res(n-1);
	str.pop_back();
}


int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	int n;
	cin >> n >> s;
	res(n);
	cout << ans;
}

