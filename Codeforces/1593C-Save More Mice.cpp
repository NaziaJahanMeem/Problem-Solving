#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,m,n;
    cin>>t;
    while(t--){
        cin>>m>>n;
        vector<int>v(n);
        int cat=0;
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int go=0,c=0;
        sort(v.rbegin(),v.rend());
        for(int i=0;i<n;i++){
            if(v[i]>cat){
                go=m-v[i];
                cat+=go;
                c++;
            }else break;
        }
        cout<<c<<"\n";
    }
    return 0;
}
