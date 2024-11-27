//LANG : C++
#include<bits/stdc++.h>
using namespace std;
int a[5];

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	for(int i=1;i<=3;i++){
		cin >> a[i];
	}
	sort(a+1,a+4);
	string s;
	cin >> s;
	for(int i=0;i<s.size();i++){
		cout << a[s[i]-'A'+1] << ' ';
	}
}
