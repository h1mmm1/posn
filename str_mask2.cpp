//LANG : C++
#include<bits/stdc++.h>
using namespace std;

int main(){
  	ios::sync_with_stdio(0); cin.tie(0);
    string s;
    char c,v;
    cin >> s >> c >> v;
    for(auto e:s){
    	if(e==c) cout << v;
    	else cout << e;
	}
}

