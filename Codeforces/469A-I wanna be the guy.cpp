#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n;
  cin>>n;
  int ar[201]={0};
  int p;
  cin>>p;
  for(int i=0;i<p;i++){
    cin>>ar[i];
  }
  int q,c=0;
  cin>>q;
  for(int i=p;i<p+q;i++){
    cin>>ar[i];
  }
  sort(ar,ar+p+q);
  for(int i=0;i<p+q;i++){
    if(ar[i]!=ar[i+1]){
        c++;
    }
  }

  if(c==n){
    cout<<"I become the guy.";
  }else{
    cout<<"Oh, my keyboard!";
  }
}
