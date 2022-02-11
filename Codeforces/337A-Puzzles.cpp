#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n,m;
  cin>>n>>m;
  int ar[m];
  for(int i=0;i<m;i++){
    cin>>ar[i];
  }
  sort(ar,ar+m);
  int ans=ar[n-1]-ar[0];
  for(int i=1;i<=m-n;i++){
    ans=min(ar[i+n-1]-ar[i],ans);
  }
  cout<<ans<<endl;
}
