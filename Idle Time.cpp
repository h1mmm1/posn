/* LANG : C++ */
#include<bits/stdc++.h>
using namespace std;
bool mp[500];

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
    int n,sum=0;
    cin >> n;
    for(int i=0;i<n;i++){
    	int a,b;
    	cin >> a;
    	cin >> b;
    	for(int j=a;j<=b;j++){
    		mp[j]=true; 
		}
	}
	for(int i=0;i<480;i++){
		if(mp[i]==true) sum++;
	}
	cout << 480-sum;
}
