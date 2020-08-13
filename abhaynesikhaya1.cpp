#include<bits/stdc++.h>
using namespace std;
int count1=0;
void subse(string a,string ans ,int i)
{

   if(i==a.length())
   {
       cout<<ans<<endl;
       return ;
   }


    subse(a,ans+a[i],i+1);
    subse(a,ans,i+1);


}
int main()
{
 string a;
 getline(cin,a);
 subse(a,"",0);
 return 0;
}
