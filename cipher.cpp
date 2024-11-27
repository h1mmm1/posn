//LANG : C++
#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	char c;
	string str,s,ans;
	cin >> c >> str >> s;
	int n=str.size();
	if(c=='e'){
		for(int i=0;i<s.size();i++){
			int x=str[i%n]-'a';
			if(s[i]+x>'z') cout << char(s[i]+x-26);
			else cout << char(s[i]+x);
		}
	}
	else if(c=='d'){
		for(int i=0;i<s.size();i++){
			int x=str[i%n]-'a';
			if(s[i]-x<'a') cout << char(s[i]-x+26);
			else cout << char(s[i]-x);
		}		
	}
	//cout << ans;
}
//e
//big
//computer
