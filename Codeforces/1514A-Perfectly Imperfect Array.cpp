#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int ar[n];
        for(int i=0;i<n;i++){
            cin>>ar[i];

        }
        int flag=0;
        for(int i=0;i<n;i++){
            int root=sqrt(ar[i]);
            if(root*root==ar[i]){
                continue;
            }else{
                cout<<"YES\n";
                flag=1;
                break;
            }
        }
        if(flag==0){
            cout<<"NO\n";
        }
    }
    return 0;
}
