#include<bits/stdc++.h>
#define INV 1e-7
#define INE 1e9
using namespace std;

int main()
{

    double n,x=0;
    long int m,c,co=0;
    cin>>n>>m;
    if(x>n){
        cout<<"Free after 0 times.";
    }
    for(int i=1;i<=m;i++){
        cin>>c;
        x+=(c/3);

        co++;
        if(x>n){

            cout<<"Free after "<<co<<" times.";
            return 0;
        }
    }
    cout<<"Team.GOV!";
}
