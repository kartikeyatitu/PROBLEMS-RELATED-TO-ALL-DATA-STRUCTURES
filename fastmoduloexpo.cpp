#include <bits/stdc++.h>
using namespace std;
int fasteXPO(int a,int b,int m)
{
    int res=1;
    while(b>0)
    {
    if(b&1)
    {
        res=(res*a)%m;
    }
        a=(a*a)%m;
        b>>1;

    }

    return res%m;


}
int main()
{
    cout<<fasteXPO(5,3,100)<<endl;

}
