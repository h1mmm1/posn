//LANG : C++
#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	int n=0;
	string s;
	cin >> s;
	s += string(":");
	for(int i=0;i<s.size();i++){
		if(s[i]!=':'){
			n+=1;
		}
		else{
			if(n%2==0){
				for(int j=i-n;j<i;j++){
					if(s[j]+n>'a' && s[j]+n<'z'){
						cout << char(s[j]+n);
					}
					else if(s[j]+n>'z'){
						cout << char(s[j]+n-26);
					}
				}
			}
			else if(n%2==1){
				for(int j=i-n;j<i;j++){
					if(s[j]-n>='a' && s[j]-n<='z'){
						cout << char(s[j]-n);
					}
					else if(s[j]-n<'z'){
						cout << char(s[j]-n+26);
					}
				}
			}
			if(i+1==s.size()){
			}
			else cout << ':';
			n=0;
		}
	}

}
