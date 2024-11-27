// LANG : C++
#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	int y;
	cin >> y;
	while(y--){
		int n=0;
		queue<char> q1,q2;
		string s;
		cin >> s;
		int m=s.size();
		for(int i=0;i<m;i++){
			q1.push(s[i]);
		}
		q2=q1;
		for(int i=0;i<m;i++){
			q1.push(q1.front());
			q1.pop();
			n++;
			if(m%n==0){
				if(q1==q2){
					for(int j=0;j<n;j++){
						cout << s[j];
					}
					break;
				}
			}
		}
		cout << "\n";
	}
}
