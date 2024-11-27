//LANG : C++
#include<bits/stdc++.h>
using namespace std;
int a[15];
bool b[15];

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	set<int> p;
	int y;
	for(int i=1;i<=10;i++){
		int n;
		cin >> n;
		p.insert(n);
		y=n;
	}
	if(y<0){
		int x=0;
		for(int e:p){
			a[x]=e;
			x++;
		}
		for(int i=x-1;i>=0;i--){
			cout << a[i] << ' ';
		}
	}
	else{
		for(int e:p){
			cout << e << ' ';
		}		
	}
		
	
}
//-1 -2 -3 -4 -5
//-2 -3 -4 -5 -6 
//2566-123
