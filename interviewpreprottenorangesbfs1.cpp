#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007
/*rotten oranges naive approach*/
const int r=3;
const int c=5;
int a[r][c] = { { 2, 1, 0, 2, 1 },
                    { 1, 0, 1, 2, 1 },
                    { 1, 0, 0, 2, 1 } };

bool issafe(int i,int j)
{
    if(i>=0 and i<=r and j>=0 and j<=c)
    {
        return true;
    }
    return false;
}
int rothue()
{

     int no=2;
     bool changed=false;
     while(true)
     {
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(a[i][j]==no)
            {


            if(issafe(i,j+1) and a[i][j+1]==1)
            {
                a[i][j+1]=a[i][j]+1;
                changed=true;


            }
            if(issafe(i+1,j) and a[i+1][j]==1)
            {
                a[i+1][j]=a[i][j]+1;
                changed=true;


            }
             if(issafe(i,j-1) and a[i][j-1]==1)
            {
                a[i][j-1]=a[i][j]+1;
                changed=true;

            }
             if(issafe(i-1,j) and a[i-1][j]==1)
            {
                a[i-1][j]=a[i][j]+1;
                changed=true;
            }
            }
        }


    }
    if(changed==false)
    {
        break;
    }
    changed=false;
    no++;
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(a[i][j]==1)
            {
                return -1;

            }
        }
    }
    return no-2;
}




int main()
{
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      cout<<rothue()<<endl;
      return 0;
}
