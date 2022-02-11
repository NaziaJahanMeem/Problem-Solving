#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    string s;
    cin.ignore();
    while(t--){
        cin>>s;
        int n=s.find("11");
        if(n==-1){
            cout<<"YES\n";

        }
        else{
            if(s.find("00",n)==-1
               ){
                cout<<"YES\n";
            }else{
                cout<<"NO\n";
            }
        }
    }
    return 0;
}
