#include<bits/stdc++.h>
using namespace std;
int dp[1000001];

int main(){
  ios::sync_with_stdio(); cin.tie(0);
  int n;
  cin >> n;
  for(int i=1;i<=n;i++){
    dp[i]+=(dp[i-1]+i);
  }
  int l=0;
  for(int r=1;r<=(n/2)+1;r++){
      while(dp[r]-dp[l]>n) l++;
      if(dp[r]-dp[l]==n){
      	for(int i=l+1;i<=r;i++){
        	cout << i << ' ';
      	}
      cout << "\n";
      }
  }
}
