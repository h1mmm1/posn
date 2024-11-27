// LANG : C++
#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	stack<int> p;
	int n,x,y;
	cin >> n;
	for(int i=0;i<n;i++){
		string s;
		cin >> s;
		if(s[0]=='+' || s[0]=='-' || s[0]=='*' || s[0]=='/'){
			x=p.top(); p.pop();
			y=p.top(); p.pop();
			if(s[0]=='+'){
				p.push(x+y);
			}
			else if(s[0]=='-'){
				p.push(y-x);
			}
			else if(s[0]=='*'){
				p.push(x*y);
			}
			else if(s[0]=='/'){
				p.push(y/x);
			}						
		}
		else{
			p.push(stoi(s));
		}
	}
	cout << p.top();
}
