#include <bits/stdc++.h>
using namespace std;
int findsetbits(int n)
{

    int count=0;
   while(n>0)
   {
       count++;
       n=(n&n-1);



   }
   return count;





}

int main()
{
    int t,n;
    cin>>t;
    while(t>0)
    {
        cin>>n;
    cout<<findsetbits(n);
      t--;
    }

}
