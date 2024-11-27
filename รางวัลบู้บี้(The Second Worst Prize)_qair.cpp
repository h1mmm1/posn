// LANG : C++
#include<bits/stdc++.h>
using namespace std;
pair<int,int> p[10050];

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	int z;
	cin >> z;
	for(int i=1;i<=z;i++){
		int n,m;
		cin >> n >> m;
		p[i]={m,n};
	}
	sort(p+1,p+1+z);
	cout << p[2].second << ' ' << p[2].first;
}
/*
8
1 8
2 7
3 6
4 5
5 4
6 3
7 2
8 1
*/
