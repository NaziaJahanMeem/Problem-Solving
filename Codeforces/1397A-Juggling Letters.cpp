#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n;
    cin>>t;
    string s;
    while(t--){
        cin>>n;
        map<char,int> mp;
        int m=n;
        while(n--){
            cin>>s;
            for(int i=0;i<s.length();i++){
                if(mp.find(s[i])==mp.end()){
                    mp[s[i]]=1;
                }else{
                    mp[s[i]]++;
                }
            }
        }
        int j=0;
        for(int i=0;i<mp.size();i++){

            if(mp[i]%m!=0){
                    cout<<"NO\n";
                    j=1;
                    break;
            }
        }
        if(j==0) cout<<"YES\n";

    }
}
