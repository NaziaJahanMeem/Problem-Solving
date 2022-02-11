#include <bits/stdc++.h>
using namespace std;
int main(){
    long long int n;
    cin>>n;
    long long int ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    int c=1,max1=1;
    for(int j=1;j<n;j++){
        if(ar[j]>=ar[j-1]){
            c++;
            max1=max(c,max1);
        }else{
            c=1;
        }
    }
    cout<<max1<<endl;
}
