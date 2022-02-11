#include <bits/stdc++.h>

using namespace std;

int main()
{

  int x;
  int c=0,b=0,m=0,n=0;
  cin>>x;
  int ar[x];
  for(int i=0;i<x;i++){
    cin>>ar[i];
    if(ar[i]%2==0){
        c++;
        b=i+1;
    }else{
        m++;
        n=i+1;
    }
  }
  if(c==1){
    cout<<b;
  }else{
    cout<<n;
  }
}
