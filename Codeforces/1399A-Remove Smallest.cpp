#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int ar[n],c=0;;
        for(int i=0;i<n;i++){
            cin>>ar[i];
        }
        sort(ar,ar+n);
        for(int i=0;i<n-1;i++){
            if(abs(ar[i]-ar[i+1])>1){
                cout<< "NO"<<endl;
                c=1;
                break;
            }
        }
        if(c==0){
        cout<< "YES"<<endl;
        }
    }
}
