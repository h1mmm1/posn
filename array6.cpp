//LANG : C++
#include<bits/stdc++.h>
using namespace std;
int a[100];


int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	int x,cnt=0;
	string s;
	getline(cin,s);	
	for(auto e:s){
		//cout << s[i] << ' ';
		if(e!=' '){
			x=e-'a'+1;
			a[x]++;
		}
	}
//	for(int i=0;i<26;i++){
//		cout << a[i] << ' ';
//	}
	for(int i=0;i<26;i++){
		if(a[i]>0){
			cout << char(i+'a'-1) << '=' << a[i] << "\n";
		}
	}
	return 0;
}
//i am wat
