#include <iostream>
using namespace std;
#define ll long long
ll a[100005],pre[100005];
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
      ll sum=0;
      ll n;
      cin>>n;
      memset(pre,0,sizeof(pre));
      pre[0]=1;
      for(int i=0;i<n;i++)
      {
          cin>>a[i];
          sum+=a[i];
          sum%=n;
          sum=(sum+n)%n;
          pre[sum]++;
      }
      ll ans=0;
      for(int i=0;i<n;i++)
      {
          ll m=pre[i];
            ans+=(m*(m-1))/2;
      }
      cout<<ans<<endl;

  }
}
