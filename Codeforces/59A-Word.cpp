#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    char c;
    int sum=0,sum1=0;
    for(int i=0;i<s.length();i++){
        c=int(s[i]);
        if(c>=97){
            sum++;
        }else if(c<=90){
            sum1++;
        }
    }

    if(sum>=sum1){
        transform(s.begin(),s.end(),s.begin(), ::tolower);
        cout<<s<<endl;
    }else if(sum<sum1){
        transform(s.begin(),s.end(),s.begin(), ::toupper);
        cout<<s<<endl;
    }
}
