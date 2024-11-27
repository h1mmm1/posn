/*

TASK: fundamental

LANG: C++

AUTHOR: puttiest anusongtiwong

CENTER: SUT

*/

#include<bits/stdc++.h>

using  namespace std;

bool a[44800];

vector<int> p;





int main(){

	ios::sync_with_stdio(0); cin.tie(0);

	for(int i=2;i<=sqrt(2000000000);i++){

		if(a[i]==false){

			p.push_back(i);

			for(int j=2;j*i<=sqrt(2000000000);j++){

				a[i*j]=true;

			}

		}

	}

	int n;

	cin >> n;

	for(int i=0;i<n;i++){

		int m;

		int sum=0;

		cin >> m;

		for(int e:p){

			if(1ll*e*e>m) break; 

			while(m%e==0){

				sum++;

				//cout << e << "\n";

				m/=e;

			} 

		}

		if(m>1) sum++;

		cout << sum << "\n";

	}

}

