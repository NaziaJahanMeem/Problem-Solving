#include <bits/stdc++.h>
using namespace std;
int main(){
  int n,co=0;
  cin>>n;
  int ar[3];
  while(n--){
    cin>>ar[0]>>ar[1]>>ar[2];
    int c=0;
    for(int i=0;i<3;i++){
        if(ar[i]==1){
            c++;
        }
    }
    if(c>=2){
        co++;
    }
  }
  cout<<co<<endl;
}
