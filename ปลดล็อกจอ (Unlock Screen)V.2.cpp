#include<bits/stdc++.h>
using namespace std;
char a[4][3]={
	'1','2','3',
	'4','5','6',
	'7','8','9',
	'*','0','#',
};

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	string s;
	int x,y;
	cin >> s;
	for(int i=0;i<4;i++){
		for(int j=0;j<3;j++){
			if(s[0]==a[i][j]){
				x=i;
				y=j;
				break;
			}
		}
	}
	cout << a[x][y];
	for(int i=1;i<s.size();i++){
		if(s[i]=='q'){
			x-=1;
			y-=1;
		}
		else if(s[i]=='w'){
			x-=1;
		}
		else if(s[i]=='e'){
			x-=1;
			y+=1;
		}
		else if(s[i]=='a'){
			y-=1;
		}
		else if(s[i]=='d'){
			y+=1;
		}
		else if(s[i]=='z'){
			x+=1;
			y-=1;
		}
		else if(s[i]=='x'){
			x+=1;
		}
		else if(s[i]=='c'){
			x+=1;
			y+=1;		
		}
		cout << a[x][y];																
	}
}
