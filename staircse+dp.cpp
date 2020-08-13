#include <bits/stdc++.h>
#include<climits>
//nstaircase
using namespace std;
int staircase(int k)
{
int ans=0;
if(k==0 || k==1)
{
return 1;
}

for(int i=0;i<k;i++)
{
   ans=ans+staircase(k-i);

}
return ans;



}
int main()
{
int k;
cin>>k;
cout<<staircase(k)<<endl;
}
