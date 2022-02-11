#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t,n,x;
    cin>>t;

    while(t--){
        cin>>n;
        stack<int> s;
        int sum=0,ans=0;
        for(int i=0;i<n;i++){
            cin>>x;
            if(x==1){
                s.push(x);
                ans+=sum;
                sum=0;
            }
            else if(!s.empty()){
                    sum++;

            }
        }
        cout<<ans<<"\n";
    }
}
