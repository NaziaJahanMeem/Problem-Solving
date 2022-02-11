#include <bits/stdc++.h>
using namespace std;
int main(){
    string s1,s2;
    cin>>s1>>s2;
    bool c=true;
    int j=0;
    for(int i=s1.length()-1;i>=0;i--){
        if(s1[i]!=s2[j]){
            c=false;
            break;
        }
        j++;
    }
    if(c==true){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}
