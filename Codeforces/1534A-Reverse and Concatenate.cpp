#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,n,k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        string s;
        cin>>s;
        string p=s;
        reverse(p.begin(),p.end());
        if(p==s || k==0){
            cout<<1<<"\n";
        }else{
            cout<<2<<"\n";
        }
    }

    return 0;
}
