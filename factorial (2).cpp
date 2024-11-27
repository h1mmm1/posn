/* TASK:factorial  
LANG:C++ 
AUTOR:puttiset auntiowg 
CENTER:SUT*/ 
#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	int n,cnt=1;
	cin >> n;
	for(int i=1;i<=n;i++){
		cnt*=i;
	}
	cout << cnt;
}
