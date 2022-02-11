#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n,c=0;
    cin>>n;
    string s;
    while(n--){
       cin>>s;
       if(s=="Icosahedron"){
        c+=20;
       }
       if(s=="Cube"){
        c+=6;
       }
       if(s=="Tetrahedron"){
        c+=4;
       }
       if(s=="Dodecahedron"){
        c+=12;
       }

       if(s=="Octahedron"){
        c+=8;
       }
    }
    cout<<c;
}
