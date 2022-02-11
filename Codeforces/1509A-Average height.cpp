#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,x;
    cin>>t;
    vector<int>v1;
    while(t--){
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>x;
            if(x%2==0){
                v1.push_back(x);
            }else{
                cout<<x<<"\n";
            }
        }
        int z=v1.size();
        for(int i=0;i<z;i++){
            cout<<v1.back()<<"\n";
            v1.pop_back();
        }

    }
    return 0;
}
