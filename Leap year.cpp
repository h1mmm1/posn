//LANG : C++
#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	int n;
	cin >> n;
	if(n%400!=0 && n%100==0){
		cout << "no";
	}
	else if(n%4==0){
		cout << "yes";
	}
	else cout << "no";
}
