#include<bits/stdc++.h>
using namespace std;
char a[100][25000];
string s;
void draw(int n,int x,int y,int cnt){
	for(int i=1;i<=2*n+1;i++){
		for(int j=1;j<=2*n+1;j++){
			if(abs(i-n-1)+abs(j-n-1)==n) a[i+x][j+y]=s[cnt];
		}
	}
}
void print(int n,int m){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cout << a[i][j];
		}
		cout << "\n";
	}
}
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	memset(a,'.',sizeof a);
	int n;
	cin >> s >> n;
	int m=s.size();
	for(int i=0;i<m;i++){
		draw(n,0,(2*n-1)*i,i);
	}

	
	print(2*n+1,(2*n)*(m)-m+2);
}
