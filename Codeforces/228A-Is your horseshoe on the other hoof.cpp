#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int a,b,c,d;
    cin>>a>>b>>c>>d;
    set<int>s{a,b,c,d};
    cout<<4-s.size();
}
