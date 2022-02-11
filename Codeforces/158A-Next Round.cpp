#include <bits/stdc++.h>
using namespace std;
int main(){
   int a,b,c=0;
   cin>>a>>b;
   int ar[a];
   for(int i=0;i<a;i++){
    cin>>ar[i];
   }
   for(int i=0;i<a;i++){
     if(ar[i]>=ar[b-1] && ar[i]>0){
        c++;
     }
   }
    cout<<c<<endl;
}
