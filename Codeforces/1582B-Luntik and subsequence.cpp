#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        long long int x;
        int c0=0,c1=0;
        for(int i=0;i<n;i++){
            cin>>x;
            if(x==0){
                c0++;
            }else if(x==1){
                c1++;
            }
        }

        long long int ans=0;
        if(c0>0){
            ans=pow(2,c0);

        }
        if(c1>0 && c0>0){
            ans=ans*c1;

        }else{
            ans=c1;
        }
        cout<<ans<<"\n";
    }
}
