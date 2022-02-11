#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int num,even=0,odd=0;
        for(int i=0;i<2*n;i++){
            cin>>num;
            if(num%2==0){
                even++;
            }else{
                odd++;
            }
        }
        if(even==odd){
            cout<<"Yes"<<"\n";
        }else{
            cout<<"No"<<"\n";
        }
    }
}
