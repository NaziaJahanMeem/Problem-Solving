#include <bits/stdc++.h>

using namespace std;

int main()
{
  int a,c=1;
  cin>>a;
  int ar[a];
  cin>>ar[0];
  for(int i=1;i<a;i++){
    cin>>ar[i];
    if((ar[i-1]==10 && ar[i]==01) || (ar[i]==10 && ar[i-1]==01)){
        c++;
    }
  }
  cout<<c<<endl;
}
