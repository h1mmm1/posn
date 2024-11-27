#include<bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
long long int dp[4][5005];
char a[4][5005];

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		
				
		for(int i=1;i<=2;i++){
			for(int j=1;j<=n;j++){
				cin >> a[i][j];
			}
		}
		memset(dp,0,sizeof dp);
		dp[1][0]=dp[2][0]=1;
		for(int j=1;j<=n;j++){
			if(a[1][j]=='.' && a[2][j]=='.'){
				dp[1][j]=dp[1][j-1]+dp[2][j-1];
				dp[2][j]=dp[1][j-1]+dp[2][j-1];
			}
			else if(a[1][j]=='#' && a[2][j]=='.'){
				dp[2][j]=dp[2][j-1];
				dp[1][j]=0;
			}
			else if(a[1][j]=='.' && a[2][j]=='#'){
				dp[1][j]=dp[1][j-1];
				dp[2][j]=0;
			}
			else break;
			dp[1][j]%=MOD;
			dp[2][j]%=MOD;			
		}
//		for(int i=1;i<=2;i++){
//			for(int j=1;j<=n;j++){
//				cout << dp[i][j] << ' ';
//			}
//			cout << "\n";
//		}
		cout << (dp[1][n]+dp[2][n])%MOD << "\n";
	}
}
