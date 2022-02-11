#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int ar[n];
        for(int i=0;i<n;i++){
            cin>>ar[i];
        }
        int ans=0;
        double x=0,y=0,z=0;
        for(int i=1;i<n;i++){
            y=max(ar[i],ar[i-1]);
            z=min(ar[i],ar[i-1]);
            x=y/z;

            if(x>2){
                while(x>2){
                x/=2;
                ans++;
                }
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}
