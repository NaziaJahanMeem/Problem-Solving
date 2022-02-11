#include <bits/stdc++.h>

using namespace std;

int main()
{
  long long int a,b;
  cin>>a>>b;
  long long int c=(a+1)/2;
  if(b<=c){
    cout<<b*2-1;
  }else{
    cout<<(b-c)*2;
  }
}
