#include <bits/stdc++.h>
using namespace std;
int main(){
  char s1[101],s2[101];
  cin>>s1>>s2;
  int r=strcmp(strlwr(s1),strlwr(s2));
  cout<<r<<endl;
}
