#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,a,b,now=0,cap=0;
    cin>>n;
    while(n--){
        cin>>a>>b;
        now-=a;
        now+=b;
        cap=max(cap,now);
    }
    cout<<cap<<endl;
}
