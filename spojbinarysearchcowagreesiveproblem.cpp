#include <bits/stdc++.h>
using namespace std;
//aggresivecow
bool canpalcecows(int* stol,int n,int c,int mid)
{
    //first cow in first stall
    int lastplacedcow=stol[0];
    int count1=1;
    for(int i=1;i<n;i++)
    {
        if(stol[i]-lastplacedcow>=mid)
        {
            lastplacedcow=stol[i];
            count1++;
            if(count1==c)
            {
                return true;
            }
            }
     }
     return false;
}
int main()
{

        int c;
        cin>>c;
        int stol[]={1,2,4,8,9};
        int n=sizeof(stol)/sizeof(int);
        int s=0;
        int e=stol[n-1]-stol[0];
        int ans=0;
        while(s<=e)
        {
          int mid=(s+e)/2;
          bool kyacowrakhpaye=canpalcecows(stol,n,c,mid);
       if(kyacowrakhpaye)
        {
               ans=mid;
               s=mid+1;
        }
      else
        {
            e=mid-1;
        }
        }
        cout<<ans<<endl;
}
