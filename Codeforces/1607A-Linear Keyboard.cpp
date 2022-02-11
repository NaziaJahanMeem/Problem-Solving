#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        string s1,s2;
        cin>>s1>>s2;
        map<char,int>mp;
        for(int i=1;i<s1.length()+1;i++){
           mp[s1[i]]=i;

        }
        int ans=0;
        for(int i=1;i<s2.length();i++){
            ans+=abs(mp[s2[i]]-mp[s2[i-1]]);
        }
        cout<<ans<<"\n";
    }
    return 0;
}
