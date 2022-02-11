#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    string s;
    cin>>t;
    while(t--){
        cin>>s;
        int n=s.length();
        int ans=n;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(((s[i]=='0' || s[i]=='5') && s[j]=='0') || ((s[i]=='2' || s[i]=='7') && s[j]=='5')){
                    ans=min(ans,(j-i-1)+(n-1-j));

                }
            }
        }
        cout<<ans<<"\n";
    }

}
