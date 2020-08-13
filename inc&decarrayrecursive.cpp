#include <iostream>
using namespace std;
void print(int a[],int n)
{
    if(n==0)
    {
    return ;
    }
 cout<<a[0];
    print(a+1,n-1);


}


void print1(int a[],int n)
{
    if(n==0)
    {
    return ;
    }
cout<<a[n-1];
    print1(a,n-1);

}





int main()
{
int a[]={1,2,3,4,5};
int n=sizeof(a)/sizeof(int) ;
print(a,n);
print1(a,n);
return 0;
}
