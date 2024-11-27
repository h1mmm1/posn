/*

TASK: banner

LANG: C++

AUTHOR: puttiest anusongtiwong

CENTER: SUT

*/

#include<bits/stdc++.h>


using namespace std;

char a[205][10000];



void draw(int n,char c,int x,int y){

	for(int i=1;i<=2*n+1;i++){

		for(int j=1;j<=2*n+1;j++){

			if(i+j>=n+2 && j-i<=n && i-j<=n && i+j<=3*n+2) a[i+x][j+y]=c;

		}

	}

}

void xx(int n,char c,int x,int y){

	for(int i=1;i<=2*n+1;i++){

		for(int j=1;j<=2*n+1;j++){

			if(i+j>=n+2 && j-i<=n && i-j<=n && i+j<=3*n+2) a[i+x][j+y]=c;

			else a[i+x][j+y]='.';

		}

	}

}

void print(int n,int m,int k){

	for(int i=1;i<=n;i++){

		for(int j=1+k;j<=m+k;j++){

			cout << a[i][j];

		}

		cout << "\n";

	}

}



int main(){

	ios::sync_with_stdio(0); cin.tie(0);

	memset(a,'.',sizeof a);

	char c;

	int n,m,b;

	int x=15;

	cin >> c >> n >> m >> b;

	

	//for(int i=0;i<b+1;i++){
	int i=0;
		for(int j=0;j<x;j++){
			draw(n,c,i*(2*n+1),j*(2*n+1)+i);
		//xx(n,c,i*(2*n+1),j-(2*n+1)-x+1+i);
		}
		

	//}

	



	//print((b+1)*(2*n+1),m);
	print((1)*(2*n+1),m,0);
    for(int i=1;i<=b;i++){
		print((1)*(2*n+1),m,-i+(2*n+1));    	
	}


}

//QR51m45

/*

O

3

60

7

*/

/*

X

4

30

5

*/

