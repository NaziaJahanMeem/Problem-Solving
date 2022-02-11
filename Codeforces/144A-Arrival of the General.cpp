#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,a=0,b=102,d=0,e=0;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
        if(a<ar[i]){
            a=ar[i];
            d=i;
        }
        if(b>=ar[i]){
            b=ar[i];
            e=i;
        }
    }
    if(d>e){
        cout<<d+n-e-2;
    }else{
        cout<<d+n-e-1;
    }
}
