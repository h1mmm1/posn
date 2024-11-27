// LANG : C++
#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	int x;
	string s;
	cin >> s;
	if(s[0]=='1') x=1,cout << s[0];
	else if(s[0]=='2') x=2,cout << s[0];
	else if(s[0]=='3') x=3,cout << s[0];
	else if(s[0]=='4') x=4,cout << s[0];
	else if(s[0]=='5') x=5,cout << s[0];
	else if(s[0]=='6') x=6,cout << s[0];
	else if(s[0]=='7') x=7,cout << s[0];
	else if(s[0]=='8') x=8,cout << s[0];
	else if(s[0]=='9') x=9,cout << s[0];
	else if(s[0]=='*') x=10,cout << s[0];
	else if(s[0]=='0') x=11,cout << s[0];
	else if(s[0]=='#') x=12,cout << s[0];										
	for(int i=1;i<s.size();i++){
		if(s[i]=='q') x-=4;
		else if(s[i]=='w') x-=3; 
		else if(s[i]=='e') x-=2;
		else if(s[i]=='a') x-=1;
		else if(s[i]=='d') x+=1;
		else if(s[i]=='z') x+=2;
		else if(s[i]=='x') x+=3;
		else if(s[i]=='c') x+=4;
		
		if(x==1) cout << '1';
		else if(x==2) cout << '2';
		else if(x==3) cout << '3';
		else if(x==4) cout << '4';
		else if(x==5) cout << '5';	
		else if(x==6) cout << '6';	
		else if(x==7) cout << '7';	
		else if(x==8) cout << '8';	
		else if(x==9) cout << '9';	
		else if(x==10) cout << '*';	
		else if(x==11) cout << '0';	
		else if(x==12) cout << '#';																													
	}
}
