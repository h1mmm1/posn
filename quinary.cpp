/*
TASK: quinary
LANG: C++
AUTHOR: puttiset
CENTER: SUT
*/
#include<bits/stdc++.h>
using namespace std;
int a[10];
int ans[20];

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	int x=1;
	for(int i=1;i<=6;i++){
		a[i]=x;
		x*=5;
		//cout << a[i] << ' ';
	}
	int c;
	cin >> c;
	while(c--){
		int n;
		cin >> n;
		int m=n;
		if(n==0){
			cout << '0' << "\n";
			continue;
		}
		if(n>0){
			for(int i=6;i>0;i--){
				int y=0;
				if(n>0){
					ans[i]=n/a[i];
					while(ans[i+y]==3){
						ans[i+1+y]++;
						ans[i+y]=-2;
						y++;
					}
					while(ans[i+y]==4){
						ans[i+1+y]++;
						ans[i+y]=-1;
						y++;
					}
					while(ans[i+y]==3){
						ans[i+1+y]++;
						ans[i+y]=-2;
						y++;
					}
					while(ans[i+y]==4){
						ans[i+1+y]++;
						ans[i+y]=-1;
						y++;
					}										 
					n%=a[i];
					
				}

			}
		}
		else{
			for(int i=6;i>0;i--){
				n=abs(n);
				int y=0;
				if(n>0){
					ans[i]=-(n/a[i]);
					while(ans[i+y]==-3){
						ans[i+1+y]--;
						ans[i+y]=2;
						y++;
					} 
					while(ans[i+y]==-4){
						ans[i+1+y]--;
						ans[i+y]=1;
						y++;
					} 
					while(ans[i+y]==-3){
						ans[i+1+y]--;
						ans[i+y]=2;
						y++;
					} 	
					while(ans[i+y]==-4){
						ans[i+1+y]--;
						ans[i+y]=1;
						y++;
					} 										
					n%=a[i];
					//cout << n << ' ';
				}

			}			
		}

		for(int i=1;i<=15;i++){
			if(ans[i+1]==0 && ans[i]==0 &&ans[i+2]==0 && ans[i+3]==0 && ans[i+4]==0 && ans[i+5]==0) continue;
			cout << ans[i] << " ";
			ans[i]=0;
		}
		cout << '\n';

	}		

}
/*
10
1
2
3
4
5
-1
-2
-3
-4
-5
*/
