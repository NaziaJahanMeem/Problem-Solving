#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,sum=0,sum1=0,c=0;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
        sum+=ar[i];
    }
    sum=sum/2;
    sort(ar,ar+n);
    for(int i=n-1;i>=0;i--){
        sum1+=ar[i];
        c++;
        if(sum1>sum){
            break;
        }
    }
    cout<<c<<endl;
}
