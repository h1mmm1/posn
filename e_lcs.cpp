// LANG : C++
#include<bits/stdc++.h>
using namespace std;


int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	string a,b;
	cin >> a >> b;
	int lcs[a.size()+1][b.size()+1];
	for(int i=0;i<=a.size();i++){
		for(int j=0;j<=b.size();j++){
			if(i==0 || j==0) lcs[i][j]=0; 
			else if(a[i-1]==b[j-1]) lcs[i][j]=lcs[i-1][j-1]+1;
			else lcs[i][j]=max(lcs[i-1][j],lcs[i][j-1]);
		}
	}
	cout << lcs[a.size()][b.size()];
}
