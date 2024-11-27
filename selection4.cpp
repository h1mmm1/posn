//LANG : C++
#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	double n;
	cin >> n;
	if(n>=180.01) n+=200;
	else if(n>=160.01 && n<=180) n+=180;
	else if(n>=140.01 && n<=160) n+=160;
	else if(n>=120.01 && n<=140) n+=140;
	else n+=120;	
	cout << fixed << setprecision(2) << n;
}
