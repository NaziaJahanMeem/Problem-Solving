#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    string n;
    while(t--){
        cin>>n;
        int l=n[0]-48;

        int s=n.length();


        if(s==1){
            cout<<(l-1)*10+1<<"\n";
        }else if(s==2){
            cout<<(l-1)*10+3<<"\n";
        }else if(s==3){
            cout<<(l-1)*10+6<<"\n";
        }else if(s==4){
            cout<<(l-1)*10+10<<"\n";
        }
    }
}
