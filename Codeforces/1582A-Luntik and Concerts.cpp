#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    long long a,b,c;
    while(t--){
        cin>>a>>b>>c;
        a*=1;
        b*=2;
        c*=3;
        c+=a+b;
        if(c%2==0){
            cout<<0<<"\n";
        }else{
            cout<<1<<"\n";
        }
    }

    return 0;
}
