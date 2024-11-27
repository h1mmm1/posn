/* LANG : C++ */
#include<bits/stdc++.h>
using namespace std;
int a[15]={31,28,31,30,31,30,31,31,30,31,30,31};
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	int d,m,d1,m1,cnt=0,cnt1=0;
	cin >> d >> m >> d1 >> m1;
	for(int i=0;i<m-1;i++){
		cnt+=a[i];
	}	
	for(int i=0;i<m1-1;i++){
	   	cnt1+=a[i];
	}

	cout << cnt1-cnt-d+d1+1;
}

