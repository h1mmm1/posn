// LANG : C++
#include<bits/stdc++.h>
using namespace std;
vector<string> v;

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
  int n;
  cin >> n;
  auto j=v.begin();
  for(int i=1;i<=n;i++){
    char c;
    cin >> c;
    if(c=='i'){
      string s;
      cin >> s;
      j=v.insert(j,s);
      j++;
    }
    else if(c=='l'){
      if(j!=v.begin()) j--;
    }
    else if(c=='r'){
      if(j!=v.end()) j++;
    }
    else if(c=='b'){
      if(j!=v.begin()){
        j--;
        v.erase(j);        
      }
    }
    else if(c=='d'){
    	if(j!=v.end()){
    	    v.erase(j);	
		}
    }
    else if(c=='s'){
      cout<<*j<<"\n";
    }
   
  }
    for(auto e:v) cout<<e; 
    //cout<<"\nj = "<<v[j-v.begin()]<<"\n";  
}

/*
9
i Peat
i pot
l
i perfect
r
b
d
l
d
*/

