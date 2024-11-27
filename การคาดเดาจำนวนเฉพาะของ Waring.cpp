// LANG : C++
#include<bits/stdc++.h>
using namespace std;
bool a[5050];
int sum[5050];
vector<int> p;

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	for(int i=2;i<=5000;i++){
		if(a[i]==false){
			p.push_back(i);
			for(int j=2;j*i<=5000;j++){
				a[i*j]=true;
			}
		}
	}
	for(int i=0;i<p.size();i++){
		if(p[i]>5000) break;
		for(int j=i;j<p.size();j++){
			if(p[i]+p[j]>5000) break;
			for(int k=j;k<p.size();k++){
				if(p[i]+p[j]+p[k]>5000) break;
				 sum[p[i]+p[j]+p[k]]++;
			}
		}
	}
	int n;
	cin >> n;
	//cout << "----------";
	for(int i=1;i<=n;i++){
		int m;
		cin >> m;
		if(a[m]==false) cout << sum[m]+1 << "\n";
		else cout << sum[m] << "\n";
	}
	return 0;
}
