#include <bits/stdc++.h>
using namespace std;


int main() {
  int n;
  cin>>n;
  long long int a,b;
  while(n--){
    cin>>a>>b;
    cout<<(b-a%b)%b<<"\n";
  }
}
