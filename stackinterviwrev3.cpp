#include <bits/stdc++.h>
using namespace std;
#define ll long long
/*stock span*/
int p[100];
int span[100];
void stockspan(int* p,int *span,int n)
{
    stack<int> s;
    s.push(0);

    span[0]=1;

    for(int i=1;i<n;i++)
    {
        int cprice=p[i];
        while(!=s.empty() and  price[s.top()]<=cprice)
        {
            s.pop();
        }
        if(!s.empty())
        {
        int pichlabada=s.top();
        span[i]=i=pichlabada;
        }
        else
        {
            span[i]=i+1;
        }
        s.push(i);

    }
}



int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int p[]={100,80,60,70,60,75,85};
  int n=sizeof(p)/sizeof(int);
  stockspan(p,span,n);
  for(int i=0;i<n;i++)
  {
      cout<<span[i]<<" ";
  }

  return 0;
}
