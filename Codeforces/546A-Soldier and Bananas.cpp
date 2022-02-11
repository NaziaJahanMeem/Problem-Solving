#include <bits/stdc++.h>
using namespace std;
int main(){
    int k,n,w;
    cin>>k>>n>>w;
    int sum=0,i=1;
    while(w--){
        sum+=i*k;
        i++;
    }
    if(n>=sum){
        cout<<0<<endl;
    }else{
        cout<<sum-n<<endl;
    }
}
