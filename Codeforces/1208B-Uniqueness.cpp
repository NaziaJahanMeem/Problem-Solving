#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,ans=0;
	cin>>n;
	vector<int> v(n+1,0);
	for(int i=1;i<=n;i++){
        cin>>v[i];
	}

	for(int i=0;i<=n;i++){
        map<int,int> mp;
        int re=0;
        for(int j=1;j<=i;j++){
            if(mp[v[j]]) break;
            mp[v[j]]=1;
            re++;
        }
        for(int j=n;j>i;j--){
            if(mp[v[j]]) break;
            mp[v[j]]=1;
            re++;
        }
        ans=max(ans,re);
	}
	cout<<n-ans<<"\n";
}
