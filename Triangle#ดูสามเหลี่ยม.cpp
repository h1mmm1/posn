// LANG : C++
#include<bits/stdc++.h>
using namespace std;
int a[5];

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	for(int i=0;i<3;i++){
		cin >> a[i];
	}
	sort(a,a+3);
	if(a[0]+a[1]<=a[2]) cout << "No";
	else if(a[0]==a[1] && a[1]==a[2]) cout << "equilateral";
	else if(a[0]!=a[1] && a[1]!=a[2] && a[0]!=a[2]) cout << "scalene";
	else if(a[0]==a[1] && a[1]!=a[2]) cout << "isosceles";
	else if(a[0]!=a[1] && a[1]==a[2]) cout << "isosceles";
}
