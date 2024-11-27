#include<bits/stdc++.h>
using namespace std;
string str;
long long int ans=0,m;
char s,c;

void rec(int n,int cnt,int sum){
	if(n==0){
		int x=str.size();
		for(int i=1;i<=x;i++){
			ans+=(str[i-1]-'A'+1)*i;
		}
		return;
	}
	if(cnt<m){
		str+=s;
		rec(n-1,cnt+1,sum);
		str.pop_back();		
	}
	if(sum<m && sum<cnt){
		str+=c;
		rec(n-1,cnt,sum+1);
		str.pop_back();
	}
}

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	int n;
	cin >> n >> s >> c;
	m=n;
	rec(n*2,0,0);
	cout << ans;
}
