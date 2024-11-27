// LANG : C++
#include<bits/stdc++.h>
using namespace std;
int month[12]={31,29,31,30,31,30,31,31,30,31,30,31};

int main(){
	int d,m,y;
	cin >> d >> m >> y;
	if(y%4==0){
		if(y%100==0 && y%400==0) month[2]=29;
		else if(y%100==0 && y%400!=0) month[2]=28;
		else month[2]=29;
	}
	if(d+1>month[m]){
		d=1;
		m+=1;
		if(m>12){
			m=1;
			y+=1;
			cout << d << "\n" << m << "\n" << y;
			return 0;
		}
		cout << d << "\n" << m << "\n" << y;
		return 0;
	}
	else{
		d+=1;
		cout << d << "\n" << m << "\n" << y;
		return 0;		
	}

}
