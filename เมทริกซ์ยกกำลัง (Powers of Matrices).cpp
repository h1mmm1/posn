// LANG : C++
#include<bits/stdc++.h>
using namespace std;
long long int a[12][12],b[12][12],keep[12][12];

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	int n,m;
	cin >> n >> m;
  
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin >> a[i][j];
			b[i][j]=a[i][j];
		}
	}
	for(int k=1;k<m;k++){
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				long long int x=0;
				for(int o=1;o<=n;o++){
					x+=a[i][o]*b[o][j];
					keep[i][j]=x;
				}
			}
		}
    	for(int i=1;i<=n;i++){
    		for(int j=1;j<=n;j++){
        		b[i][j]=keep[i][j];
      		}
    	}
	}
  if(m==0){
    for(int i=1;i<=n;i++){
      keep[i][i]=1;
    }
  }

  
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cout << keep[i][j] << " ";
		}
		cout << "\n";
	}
}

