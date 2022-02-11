#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n1,n2;
    cin>>t;

    while(t--){
        cin>>n1>>n2;
        int ar1[n1],ar2[n2],c=0;
        for(int i=0;i<n1;i++){
            cin>>ar1[i];
        }
        for(int i=0;i<n2;i++){
            cin>>ar2[i];
        }
        for(int i=0;i<n2;i++){
            for(int j=0;j<n1;j++){
                if(ar2[i]==ar1[j]){
                    c=ar1[j];
                    break;
                }
            }
            if(c!=0) break;
        }
        if(c!=0){
                cout<<"YES"<<endl;
            cout<<1<<" "<<c<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }

}
