#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,n,k1,k2,w,b;
    cin>>t;
    while(t--){
        cin>>n>>k1>>k2>>w>>b;
        if(2*w<=k1+k2 && 2*b<=(2*n-k1-k2)){
            cout<<"YES"<<"\n";
        }else{
            cout<<"NO"<<"\n";
        }
    }
    return 0;
}
