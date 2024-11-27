//LANG : C++
#include<bits/stdc++.h>
using namespace std;
int a[10];
int b[10];

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	for(int i=1;i<=5;i++){
		cin >> a[i];
	}
	for(int i=1;i<=5;i++){
		cin >> b[i];
	}
	for(int i=1;i<=5;i++){
		cout << a[i]+b[i] << ' ';
	}
}
