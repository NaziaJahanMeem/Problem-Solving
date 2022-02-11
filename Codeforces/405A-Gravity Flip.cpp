#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    int ar[t];
    for(int i=0;i<t;i++){
        cin>>ar[i];
    }
    sort(ar,ar+t);
    for(int i=0;i<t;i++){
        cout<<ar[i]<<" ";
    }
    return 0;
}
