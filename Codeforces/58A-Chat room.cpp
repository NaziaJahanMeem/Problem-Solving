#include <bits/stdc++.h>
using namespace std;
int main(){
    string s,a="hello";
    cin>>s;
    int j=0,c=0;
    for(int i=0;i<s.length();i++){
        if(s[i]==a[j]){
            j++;
            c++;
            if(c==5){

                break;
            }
        }
    }
    if(c==5){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}
