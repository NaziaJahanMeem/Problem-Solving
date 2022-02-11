#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int c=0;
    for(int i=0;i<s.length();i++){
        if(s[i]==toupper(s[i])){
            c++;
        }
    }
    if(s[0]==tolower(s[0]) && c==s.length()-1){
        s[0]=toupper(s[0]);
        for(int i=1;i<s.length();i++){
            s[i]=tolower(s[i]);
        }
    }else if(c==s.length()){
        transform(s.begin(),s.end(),s.begin(), ::tolower);
    }
    cout<<s<<endl;
}
