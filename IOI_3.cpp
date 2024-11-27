// LANG : C++
#include<bits/stdc++.h>
using namespace std;


int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	long long int n,m,x;
	cin >> n >> m;
	set<long long int> s;
	for(long long int i=0;i<n+m;i++){
		cin >> x;
		if(x==-1){
			cout << *(s.rbegin()) <<"\n";
			s.erase(*(s.rbegin()));
		}
		else{
			s.insert(x);
		}
	}
}
