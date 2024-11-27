/* LANG : C++ */
#include<bits/stdc++.h>
using namespace std;
char x[30];
char a[105][105];
bool mp[30];
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	char c;
	int n,k=0;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> c;
		mp[c-'A'+1]=true;
	}
	for(int i=1;i<=26;i++){
		if(mp[i]==true){
			x[k]='A'+i-1;
			k++;
		}
	}
	for(int i=1;i<=2*k+1;i++){
		for(int j=1;j<=2*k+1;j++){
			//if(abs(i-k)+abs(j-k)<=k-1) a[i][j]=c;
			for(int h=0;h<=k-1;h++){
		       if(abs(i-k)+abs(j-k)==h) a[i][j]=x[k-1-h];				
		 	}			
		}
	}
	for(int i=1;i<=2*k+1;i++){
		for(int j=1;j<=2*k+1;j++){
			if(a[i][j]=='\0') cout << ' ';
			else cout << a[i][j];
		}
		cout << "\n";
	}
}
