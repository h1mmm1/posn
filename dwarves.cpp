//LANG : C++
#include<bits/stdc++.h>
using namespace std;
int a[15];

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	int sum=0;
	for(int i=1;i<=9;i++){
		cin >> a[i];
		sum+=a[i];
	}
	for(int i=1;i<=9;i++){
		for(int j=1;j<=9;j++){
			if(i==j) continue;
			if(sum-a[i]-a[j]==100){
				a[i]=0;
				a[j]=0;
				break;
			}
		}
	}
	for(int i=1;i<=9;i++){
		if(a[i]!=0) cout << a[i] << '\n';
	}
}
