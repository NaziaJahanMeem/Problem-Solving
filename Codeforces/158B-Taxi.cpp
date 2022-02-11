#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,a,ar[5]={0};
    cin>>n;
    while(n--){
        cin>>a;
        ar[a]++;
    }
    int sum=ar[4]+ar[3]+ar[2]/2;
    ar[1]=ar[1]-ar[3];
    if(ar[2]%2==1){
        sum++;
        ar[1]-=2;
    }
    if(ar[1]>0){
        sum+=(ar[1]+3)/4;
    }
    cout<<sum<<endl;

}
