#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    string s;
    while(t--){
        cin>>s;
        for(int i=0;i<s.length();i++){
            if(i%2==0 && s[i]!='a'){
                cout<<'a';
            }else if(i%2==0 && s[i]=='a'){
                cout<<'b';
            }else if(i%2!=0 && s[i]!='z'){
                cout<<'z';
            }else if(i%2!=0 && s[i]=='z'){
                cout<<'y';
            }
        }
        cout<<"\n";
    }
    return 0;
}
