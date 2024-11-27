// LANG : C++
#include<bits/stdc++.h>
using namespace std;
char a[4][3]{
	'1','2','3',
	'4','5','6',
	'7','8','9',
	'*','0','#',			
};
char b[300][2];

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	for(int i=0;i<4;i++){
		string str;
		cin >> str;
		for(int j=0;j<3;j++){
		   b[str[j]][0]=i;
		   b[str[j]][1]=j;
		}
	}
	string s;
	cin >> s;
	for(int i=0;i<s.size();i++){
		cout << a[b[s[i]][0]][b[s[i]][1]];
	}
}
