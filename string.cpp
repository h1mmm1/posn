// LANG : C++
#include<bits/stdc++.h>
using namespace std;
int kmp[50050];
void KMP(string p){
	int m=p.size();
	for(int i=1,j=0;i<m;i++){
		while(j>0 && p[j]!=p[i]) j=kmp[j-1];
		if(p[j]==p[i]) kmp[i]=++j;
	}
}
int KMP_1(string s,string p){
	int n=s.size();
	int m=p.size();
	for(int i=1,j=0;i<n;i++){
		while(j>0 && p[j]!=s[i]) j=kmp[j-1];
		if(p[j]==s[i]) ++j;
		if(j==m) return i-j+1;
	}
}

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	int n,x;
	cin >> n;
	for(int i=1;i<=n;i++){
		string p;
		cin >> p;
		string s;
		s=p+p;
		KMP(p);
		x=KMP_1(s,p);
		
		for(int j=0;j<x;j++){
			cout << p[j];
		}
		
		//cout << x;
		cout << "\n";
		memset(kmp,0,sizeof kmp);
	}
}
