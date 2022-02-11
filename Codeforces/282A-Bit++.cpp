#include <bits/stdc++.h>
using namespace std;
int main(){
  int n,c=0;;
  cin>>n;
  string s;

  while(n--){
    cin>>s;
    if(s[1]=='+'){
        c++;
    }else if(s[1]=='-'){
        c--;
    }
  }
  cout<<c<<endl;
}
