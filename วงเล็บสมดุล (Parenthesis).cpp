/* LANG : C++ */
#include<bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(0); cin.tie(0);
  int n;
  cin >> n;
  while(n--){
    stack<char> st;
    string s;
    cin >> s;
    bool chk=true;
    for(int i=0;i<s.size();i++){
      if(s[i]=='(' || s[i]=='['){
        st.push(s[i]);
      }  
      else if(st.empty()){
        cout << "No\n";
        chk=false;
        break;
      }  
      else if(st.top()=='(' && s[i]==')'){
        st.pop();
      }
      else if(st.top()=='[' && s[i]==']'){
        st.pop(); 
	    }
      else{
        cout << "No\n";
        chk=false;
        break;
      }
    }
    if(chk){
       if(st.empty()) cout << "Yes\n";
       else cout << "No\n";
    }
  }
}

