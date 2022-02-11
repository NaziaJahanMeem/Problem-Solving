#include<bits/stdc++.h>
using namespace std;

int main()
{
   int t,n,k;
   cin>>t;
   while(t--){
    cin>>n>>k;
    int ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    sort(ar,ar+n);
    long c=0,co=0;
    for(int i=1;i<n;i++){
        c=k-ar[i];
        co+=c/ar[0];
    }
    cout<<co<<"\n";
   }
}
