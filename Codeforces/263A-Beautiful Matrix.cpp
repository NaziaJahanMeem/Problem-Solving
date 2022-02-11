#include <bits/stdc++.h>
using namespace std;
int main(){
  int a,c=0;
  for(int i=1;i<6;i++){
    for(int j=1;j<6;j++){
        cin>>a;
        if(a==1){
            c=abs(3-j)+abs(3-i);
            cout<<c<<endl;
            return 0;
        }
    }
  }
}
