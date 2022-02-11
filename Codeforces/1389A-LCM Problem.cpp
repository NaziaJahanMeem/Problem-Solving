#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    long long a,b;
    while(t--){
        cin>>a>>b;
        if(2*a<=b){
            cout<<a<<" "<<2*a<<endl;
        }else{
            cout<<-1<<" "<<-1<<endl;
        }
    }
}
