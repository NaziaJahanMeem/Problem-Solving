#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,a,b,c;
    cin>>n;
    while(n--){
        cin>>a>>b>>c;
        cout<<max(0,max(b,c)+1-a)<<" "<<max(0,max(c,a)+1-b)<<" "<<max(0,max(a,b)+1-c)<<"\n";
    }
    return 0;
}
