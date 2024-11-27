/* LANG : C++ */
#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	bool a=false;
	int n;
	cin >> n;
	for(int k=1;k<=n;k++){
		int cnt=0;
		for(int i=k;i<n;i++){
			cnt+=i;
			
			if(cnt==n){
				for(int j=k;j<=i;j++){
					cout << j << ' ';
					a=true;
				}
				cout << "\n";
			}
			else if(cnt>n) break;
		}				
	}
	if(a==false){
		cout << "No";	
	} 
}
