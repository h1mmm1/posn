/* LANG : C++ */
#include<bits/stdc++.h>
using namespace std;
long long int a[10000000];
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
    int n;
	cin >> n;
	a[1]=1;
	a[2]=1;	
	for(int i=0;i<n;i++){
		a[i+2]=a[i+1]+a[i];
	}
	cout << a[n];
}
