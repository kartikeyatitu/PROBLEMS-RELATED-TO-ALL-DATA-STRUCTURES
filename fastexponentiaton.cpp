#include <iostream>
using namespace std;
int fastpow(int a,int n)
{
     if(n==0)
     {
         return 1;
     }
     int chotiproblem=fastpow(a,n/2);
     if(n&1)
     {
         return a*chotiproblem*chotiproblem;
     }
     return chotiproblem*chotiproblem;
}
int main()
{
   int a,n;
   cin>>a>>n;
   cout<<fastpow(a,n)<<endl;
  return 0;
}
