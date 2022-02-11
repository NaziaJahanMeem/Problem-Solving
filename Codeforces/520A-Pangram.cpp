#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    set<char> s1;
    for(int i=0;i<n;i++){
        s1.insert(tolower(s[i]));
    }
    if(s1.size()==26){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
}
