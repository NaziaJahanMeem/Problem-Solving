#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;

    long long int n;
    while(t--){
        cin>>n;
        if(n%2!=0){
            cout<<(n+1)/2<<"\n";
        }else{
            cout<<n/2<<"\n";
        }
    }
}
