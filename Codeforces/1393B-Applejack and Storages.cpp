#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a[100009],ar[100009],n,x,t,m;
    char c;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        a[x]++;
        ar[a[x]]++;
    }
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>c>>m;
        if(c=='+'){
            a[m]++;
            ar[a[m]]++;
        }else{
            ar[a[m]]--;
            a[m]--;

        }
        if((ar[2]>1 && ar[6]>0) || ar[4]>1 || ar[8]>0 || (ar[2]>2 && ar[4]>0)){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}
