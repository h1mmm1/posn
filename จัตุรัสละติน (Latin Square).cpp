// LANG : C++
#include <bits/stdc++.h>
using namespace std;
char a[25][25];
bool r[256][25]; 
bool c[256][25];
bool chk[256];


int main() {
	ios::sync_with_stdio(0);cin.tie(0);
	int n;
  cin >> n;
  int m;
  cin >> m;
  for(int k=0;k<n;k++){
    int sum=0;
    bool chk_latin=true;
    for(int i=0;i<m;i++){
      for(int j=0;j<m;j++){
        cin >> a[i][j];
        if(r[a[i][j]][i]==false) r[a[i][j]][i]=true;
        else chk_latin=false;
        if(c[a[i][j]][j]==false) c[a[i][j]][j]=true;
        else chk_latin=false; 
        if(chk[a[i][j]]==false){
          chk[a[i][j]]=true;
          sum+=1;
        }
      }
    }
   if(sum!=m) chk_latin=false;
    if(chk_latin==false) cout << 'N' << "\n";
    else cout << 'Y' << "\n";
    memset(r,false,sizeof r);
    memset(c,false,sizeof c);
    memset(chk,false,sizeof chk);    
  }
}
