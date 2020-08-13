#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007
/*circular tour problem interview*/
#define  R 3
#define  C 5
int p[100],dis[100];
void solve(int* p,int* dis,int n)
{
    int start=0;
    int surplus=0;
    int defi=0;
    for(int i=0;i<n;i++)
    {
        sum+=p[i]-dis[i];
        if(sum<0)
        {
            start=i+1;
            defi+=sum;
            sum=0;
        }
    }
    if(surplus+defi>=0)
    {
        cout<<"yes there is a circular tour and its value is"<<start<<endl;
    }
    else
    {
        cout<<-1<<endl;
    }
}
int main()
{
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      int t;
      cin>>t;
      while(t--)
      {
          cin>>n;
          solve(n);
      }
      return 0;
}
