/* LANG : C++ */
#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		int a,b,c,cnt=1;
		cin >> a >> b >> c;
		for(int i=0;i<b;i++){
			cnt*=a;
			cnt%=c;
		}
	cout << cnt << ' ';		
	}			
}
