
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        long long l,r,m;
        cin>>l>>r>>m;
        long long x=m+l-r,y=m+r-l,a,b,c;
        for(long long i=l;i<=r;i++){
            long long m1=y-(y%i);
            if(m1>=x && m1<=y){
                if(m1>=m){
                    a=i;
                    long long dif=m1-m;
                    c=r;
                    b=r-dif;
                    break;
                }else{
                    a=i;
                    long long dif=m-m1;
                    b=r;
                    c=r-dif;
                    break;
                }
            }
        }
        cout<<a<<" "<<b<<" "<<c<<"\n";
    }

}
