/* LANG : C++ */
#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	int n,cnt,sum=0;
	cin >> n;
	for(int i=0;i<n;i++){
		string s;
		cin >> s;
		for(int j=0;j<s.size();j++){
			cnt=s[j]-'0'-16;
			sum+=cnt;
		}
	}
	cout << sum;
}
