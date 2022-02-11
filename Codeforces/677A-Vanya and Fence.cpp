#include <bits/stdc++.h>
using namespace std;

int main() {
  int a,b,c=0,x;
  cin>>a>>b;
  while(a--){
    cin>>x;
    if(x<=b){
        c++;
    }else{
        c+=2;
    }
  }
  cout<<c<<endl;

}
