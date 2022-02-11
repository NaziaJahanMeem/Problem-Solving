#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    long long n;
    while(t--){
        cin>>n;
        long long ar1[n],ar2[n];
        long long mina=99999999999,minb=99999999999,c=0;
        for(long long i=0;i<n;i++){
            cin>>ar1[i];
            mina= min(mina,ar1[i]);
        }
        for(long long i=0;i<n;i++){
            cin>>ar2[i];
            minb= min(minb,ar2[i]);
        }
        for(long long i=0;i<n;i++){
            c+=max((ar1[i]-mina),(ar2[i]-minb));
        }
        cout<<c<<"\n";
    }
}
