//LANG : C++
#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	int cnt=0;
	string s;
	cin >> s;
	for(int i=0;i<s.size();i++){
		if(i%2!=0){
			cnt+=s[i]-'0';
		}
		else{
			int x=(s[i]-'0')*2;
			while(x>=10){
				cnt+=x%10;
				x/=10;
			}
			cnt+=x;
		}
	}
	cnt%=10;
	if(cnt==0){
		if(s[0]=='3') cout << "Amex (American Express)." << "\n";
		else if(s[0]=='4') cout << "Visa." << "\n";
		else if(s[0]=='5') cout << "Master Card." << "\n";
		else if(s[0]=='6') cout << "Discover." << "\n";
		cout << "Valid Card.";
	}
	else cout << "Invalid Card.";
}
//4539689887705798
//3452344567234980
//5270696836642105
