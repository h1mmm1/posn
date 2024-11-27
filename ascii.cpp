//LANG : C++
#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	string s;
	getline(cin,s);
	for(auto e:s){
		if((e>='a' && e<='z') || (e>='A' && e<='Z')) cout << int(e) << ' ';
	}
}
