// LANG : C++
#include<bits/stdc++.h>
using namespace std;

int N=5e6;
bool a[2300];
vector<int> p;
vector<int> powerful;
vector<int> hpw;
bool pwf[20000005];


int prodex(int x){
  int ans=1;
  for(auto e:p){
    if(1ll*e*e>x) break;
    int sum=0;
    while(x%e==0){
      sum++;
      x/=e;
    } 
    if(sum>0) ans*=sum;
  } 
  return ans;
}

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
  for(int i=2;i<=sqrt(5000000);i++){
    if(a[i]==false){
      p.push_back(i);
      for(int j=2;i*j<=sqrt(5000000);j++){
        a[i*j]=true;
      }
    }
  }  

  sort(powerful.begin(),powerful.end());
  int mx=0;
  for(auto e:powerful){
    int pd=prodex(e);
    if(pd>mx){
      mx=pd;
      hpw.push_back(e);
    }
  }
  
  int m,n;
  cin >> m >> n;
  while(n--){
    int r;
    cin >> r;
    cout << prodex(r) << ' ';
    /*
    for(int i=0;i<hpw.size();i++){
     	if(hpw[i]>r) {
        	 cout << hpw[i-1] << "\n"; 
        	 break;
       	}
    	if(hpw[hpw.size()]<r){
    		cout << hpw[hpw.size()-1] << "\n";
    		break;
		} 
    */
      auto u=upper_bound(hpw.begin(),hpw.end(),r);
      cout << *(u-1) <<"\n";
  }

  
  /*
  int u=0;
  for(int e:hpw){
    cout << e << ' ';
    u++;
    if(u>100) break;
  }
  cout << "\n\n" << powerful.size() << "\n" << hpw.size();
  */
}
