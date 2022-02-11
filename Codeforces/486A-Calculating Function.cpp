#include <bits/stdc++.h>
#define IO ios::sync_with_stdio(0); cin.tie(0); cin.out(0);
using namespace std;

int main()
{
  long long int n;
  cin>>n;
  if(n%2==0){
    cout<<n/2;
  }else{
    cout<<-(n+1)/2;
  }
}
