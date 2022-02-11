#include <bits/stdc++.h>

using namespace std;

int main()
{
  string s;
  cin>>s;
  regex p("WUB");
  cout<<regex_replace(s,p," ");
}
