// LANG : C++
#include<bits/stdc++.h>
using namespace std;
int sum[30000];
int ans[30000];

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	int n,cnt=1;
	cin >> n;
	for(int i=1;i<=n;i++){
		int bi,pi;
		cin >> bi >> pi;
		sum[i]=bi/pi;
		ans[i]=sum[i];
	}
	sort(sum,sum+n);
	for(int i=0;i<3;i++){
		for(int j=1;j<=n;j++){
			if(cnt<=3){
				if(sum[n-i]==ans[j]){
					cout << j << "\n";
					cnt++;
				} 				
			}
			

		}
	}
	
}
/*
6
0 521=0
442 210=2.1
119 100=1.19
120 108=1.11
619 744=0.83
48 10=4.8
*/
