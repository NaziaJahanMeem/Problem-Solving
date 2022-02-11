#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,x;
    cin>>t;
    while(t--){
        cin>>x;
        if(x<=30){
            cout<<"NO"<<endl;
        }else if(x==36 || x==40 || x==44){
            cout<<"YES"<<endl;
            cout<<"6 10 15 "<<x-31<<endl;
        }else{
            cout<<"YES"<<endl;
            cout<<"6 10 14 "<<x-30<<endl;
        }
    }
}
