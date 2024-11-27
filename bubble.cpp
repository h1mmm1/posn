// LANG : C++
#include<bits/stdc++.h>
using namespace std;
int a[5];

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	for(int i=0;i<5;i++){
		cin >> a[i];
	}
	for(int i=0; ;i++){
		if(a[0]==1 && a[1]==2 && a[2]==3 && a[3]==4 && a[4]==5) return 0;
		for(int j=0;j<4;j++){
			if(a[j]>a[j+1]){
				swap(a[j],a[j+1]);
				for(int e:a){
					cout << e << ' ';					
				}
		cout << "\n";				
			} 
				
		}
	}
}
