#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	long long int n;
	cin >> n;
	for(int i=1;i*i<n;i++){
		if(n%i==0) {
		   cout << i <<' ';	
		}		
	}
	for(int i=sqrt(n);i>=1;i--){
		if(n%i==0) {
			cout << n/i <<" ";
		}
	}
}

