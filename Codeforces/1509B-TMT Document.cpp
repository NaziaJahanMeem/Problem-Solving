#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,t=0,m=0,c=0;
        cin>>n;
        string st;
        cin>>st;
        for(int i=0;i<n;i++){
            if(st[i]=='T'){
                t++;
            }else{
                m++;
            }
        }
        if(2*m!=t){
            cout<<"NO"<<"\n";
        }else{
            int flag=0;
            for(int i=0;i<n;i++){
                if(st[i]=='T'){
                    c++;
                }else{
                    c--;
                }
                if(c<0){
                    cout<<"NO"<<"\n";
                    flag=1;
                    break;
                }
            }
            if(flag==0){
                int fl=0,c=0;
                for(int i=st.length()-1;i>=0;i--){
                    if(st[i]=='T'){
                        c++;
                    }else{
                        c--;
                    }
                    if(c<0){
                        cout<<"NO"<<"\n";
                        fl=1;
                        break;
                    }
                }
                if(fl==0){
                cout<<"YES"<<"\n";
                }
            }

        }
    }
    return 0;
}
