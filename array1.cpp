//LANG : C++
#include<bits/stdc++.h>
using namespace std;
int a[25];

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	int n;
	cin >> n;
	for(int i=1;i<=n;i++){
		cin >> a[i];
	}
	for(int i=n;i>0;i--){
		cout << a[i] << ' ';
	}
}