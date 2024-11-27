/*
TASK: prime
LANG: C++
AUTHOR: puttiset
CENTER: SUT
*/
#include<bits/stdc++.h>
using namespace std;
bitset<1000100005> a;
vector<int> p;


int main(){
	ios::sync_with_stdio(0); cin.tie(0);

	a[0]=true;
	a[1]=true;
	int n,m,a2=0,a4=0,a6=0;
	cin >> n >> m;
	for(int i=2;i*i<=m+100000;i++){
		if(a[i]==false){
			for(int j=i*i;j<=m+100000;j+=i){
				a[j]=true;
			}
		}
	}	
	for(int i=n-2;i<=m;i++){
		if(a[i]==false && a[i+2]==false){
			p.push_back(i);
			p.push_back(i+2);
		} 
	}
	sort(p.begin(),p.end());
	for(int i=0;i<p.size();i++){
		if(p[i+1]!=p[i]){
			if(p[i]>=n && p[i]<=m) a2++;
			//cout << p[i] << ' ';
		} 
		p[i]=0;
	}
	
	
	for(int i=n-4;i<=m;i++){
		if(a[i]==false && a[i+4]==false){
			p.push_back(i);
			p.push_back(i+4);			
		}
	}
	sort(p.begin(),p.end());	
	for(int i=0;i<p.size();i++){
		if(p[i+1]!=p[i]){
			if(p[i]>=n && p[i]<=m) a4++;
			//cout << p1[i] << ' ';
		} 
		p[i]=0;
	}

	
	for(int i=n-6;i<=m;i++){
		if(a[i]==false && a[i+6]==false){
			p.push_back(i);
			p.push_back(i+6);			
		} 
	}	
	sort(p.begin(),p.end());	
	for(int i=0;i<p.size();i++){
		if(p[i+1]!=p[i]){
			if(p[i]>=n && p[i]<=m) a6++;
			//cout << p2[i] << ' ';
		} 
		p[i]=0;
	}
	cout << a2 << '\n' << a4 << '\n' << a6 << "\n";			


}
