#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int c=0,c1=0;
    for(int i=0;i<s.length();i++){

        if(s[i]=='A'){
            c++;
        }else if(s[i]=='D'){
            c1++;
        }
    }

    if(c>c1){
        cout<<"Anton"<<endl;
    }else if(c1>c){
        cout<<"Danik"<<endl;
    }else{
        cout<<"Friendship"<<endl;
    }
}
