#include <ios>
using namespace std;

int main()
{
   int t,a,b,c;
   cin>>t;
   while(t--){
    cin>>a>>b>>c;
    long long d=a+b+c;
    if(d-c>=2){
        cout<<d-2<<"\n";
    }else{
        cout<<c+1<<"\n";
    }
   }

}
