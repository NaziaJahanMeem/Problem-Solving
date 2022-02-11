#include <bits/stdc++.h>
using namespace std;
int main(){

  string s;
  cin>>s;
  int c=0;
  for(int i=1;i<s.length();i++){
    if(s[i]==s[i-1]){
        c++;
        if(c==6){
            cout<<"YES"<<endl;
            return 0;
        }
    }
    else{
        c=0;
    }
  }
  cout<<"NO"<<endl;
}
