/* LANG : C++ */
#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	int n,cnt=1;
	cin >> n;
	for(int i=1;i<=1000;i++){
		cnt*=i;
		if(cnt>n){
			cout << i-1;
			return 0;
		} 		 
	}
}
