// LANG : C++
#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	string s;
	int n;
	cin >> s >> n;
	for(int i=0;i<s.size();i++){
		for(int j=0;j<=42;j++){
			int c=(n*j)%43;
			if(s[i]-48==c) cout << char(j+48);
		}
	}
}
