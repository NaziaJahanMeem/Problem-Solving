#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int s1,s2,s3,s4;
        cin>>s1>>s2>>s3>>s4;
        if(s1>s2 && (s2<s3 || s2<s4) && (s1>s3 || s1>s4)){
            cout<<"YES"<<"\n";
        }else if(s2>s1 && (s1<s3 || s1<s4) && (s2>s3 || s2>s4)){
            cout<<"YES"<<"\n";
        }else{
            cout<<"NO"<<"\n";
        }
    }
}
