#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    long long int n;
    while(t--){
        cin>>n;
        long long ar[n];
        int c=0;
        for(int i=0;i<n;i++){
            cin>>ar[i];
        }
        for(int i=2;i<n;i++){
            if(ar[0]+ar[1]<=ar[i]){
                cout<<1<<" "<<2<<" "<<i+1<<endl;
                c=1;
                break;
            }
        }
        if(c!=1){
            cout<<-1<<endl;
        }
    }
}
