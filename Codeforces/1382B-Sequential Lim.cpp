#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n;

    cin>>t;
    while(t--){
            int c=0;
        cin>>n;
        int ar[n];
        for(int i=0;i<n;i++){
            cin>>ar[i];
        }
        for(int i=0;i<n;i++){
            if(ar[i]==1){
                c++;
            }else
                break;
        }
        if(c==n){
            c--;
        }
        if(c%2==1){
            cout<<"Second"<<endl;
        }else{
            cout<<"First"<<endl;
        }
    }
}
