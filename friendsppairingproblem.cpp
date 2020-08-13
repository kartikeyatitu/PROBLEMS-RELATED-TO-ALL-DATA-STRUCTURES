#include <bits/stdc++.h>
using namespace std;
//friends pairing problem topdown dp(recursion+memoization)
#define ll long long
const int M=10000007;
//topdown approach
int ans(int n,int *dp)
{
    if(n<=2)
    {
        dp[n]=n;
        return dp[n];
    }
    if(dp[n]!=-1)
    {
        return dp[n];
    }
    int ans1=ans(n-1,dp)+(n-1)*ans(n-2,dp);
    dp[n]=ans1;
    return dp[n];
}




int main()
{
    int n;
    cin>>n;
    int *dp=new int[n];
    memset(dp,-1,sizeof(dp));
    cout<<ans(n,dp)<<endl;
    return 0;
}
