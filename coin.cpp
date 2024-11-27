// LANG : C++
#include<bits/stdc++.h>
using namespace std;
string s;
int cnt=0;
void rec(int h,int t){
	if(h==0 && t==0) cnt++;
	else {
		if(s.back()!='H'&&h!=0){
			s+='H';
			rec(h-1,t);
			s.pop_back();
		}
		if(t!=0){
			s+='T';
			rec(h,t-1);
			s.pop_back();			
		}

	}	
}

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	int y=3;
	while(y--){
	   int h,t;
	   cin >> h >> t;
	   rec(h,t);
	   cout << cnt << "\n";	
	   cnt=0;
	}
}
