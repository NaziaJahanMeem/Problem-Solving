#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    string s;

    while(t--){
        cin>>s;
        int c=0,ans=0;
        vector<int>v;
        for(int i=0;i<s.length();i++){
            if(s[i]=='1'){
                c++;
            }else{
                if(c){
                    v.push_back(c);
                    c=0;
                }
            }
        }
        if(c){
            v.push_back(c);
        }
        sort(v.begin(),v.end(),greater<int>());
        for(int i=0;i<v.size();i+=2){
            ans+=v[i];
        }
        cout<<ans<<endl;
    }

}
