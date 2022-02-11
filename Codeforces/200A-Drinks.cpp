#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n,x,a=0;
  cin>>n;
  int y=n;
  while(n--){
    cin>>x;
    a+=x;
  }
  double ans=(double)a/y;
  cout<<ans;
}
