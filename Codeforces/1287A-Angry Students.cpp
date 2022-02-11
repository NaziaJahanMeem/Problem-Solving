#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n;
    cin>>t;
    string s;
    while(t--){
        cin>>n;
       int c=0,ans=0;
        cin>>s;
        for(int i=n-1;i>=0;i--){
            if(s[i]=='P'){
                c++;
            }else{
                ans=max(ans,c);
                c=0;
            }
        }
        cout<<ans<<endl;
    }
}
