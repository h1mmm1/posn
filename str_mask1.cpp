//LANG : C++
#include<bits/stdc++.h>
using namespace std;

int main(){
  	ios::sync_with_stdio(0); cin.tie(0);
    string s;
    char c;
    cin >> s >> c;
    for(auto e:s){
    	if(e==c) cout << '#';
    	else cout << e;
	}
}

