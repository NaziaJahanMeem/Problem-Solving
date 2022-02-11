#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,a;
    cin>>t;

    while(t--){
        cin>>n;
        int ar[101]={0};
        for(int i=0;i<n;i++){
            cin>>a;
            ar[a]++;
        }
        int c=0;
        for(int i=2;i<=100;i++){
            int co=0;
            for(int j=1;j<i;j++){
                co+=min(ar[j],ar[i-j]);
            }
            c=max(c,co/2);
        }
        cout<<c<<endl;
    }
}
