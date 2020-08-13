#include<iostream>
using namespace std;
int fact(int n)
{
int k;
while(n>0)
{ k=1;
    k=k*n;
    n--;
}
return k;

}

int ncr(int n,int r)
{
    int j=((fact(n))/fact(r) * fact(n-r) );
    return j;
}

int main()
    {
        int r;
        cin>>r;
    int n;
    cin>>n;
    int c,d;
    c=fact(n);
    cout<<c;
    d=ncr(n,r);
    cout<<d;
    return 0;
    }
