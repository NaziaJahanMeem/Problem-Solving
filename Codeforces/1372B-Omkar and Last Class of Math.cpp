#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n;
   cin>>n;
   while(n--){
    int x;
    cin>>x;
    int p=1;
    for(int i=2;i*i<=x;i++){
        if(x%i==0){
          p=x/i;
          break;
        }
    }
    cout<<p<<" "<<x-p<<"\n";
   }
}
