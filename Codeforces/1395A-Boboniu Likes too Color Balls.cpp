#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t,r,g,b,w;
    cin>>t;
    while(t--){
        cin>>r>>g>>b>>w;
        if((r%2+g%2+b%2+w%2)<=1){
            cout<<"Yes"<<endl;
        }else if(min(r,min(g,b))>0 && ((r-1)%2+(g-1)%2+(b-1)%2+(w+3)%2)<=1){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
    }

}
