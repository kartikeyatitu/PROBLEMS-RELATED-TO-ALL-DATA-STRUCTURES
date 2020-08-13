#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007
/*remove k digits interview prep*/
string s;
string s1="";
int k;
void solve(int k,string s)
{
    stack<char> s2;
    int n=s.size();
    s2.push(s[0]);
    int i=1;
    while(i<n)
    {
        while(!s2.empty() and k>0 and s2.top()>s[i])
        {
            s2.pop();
            k--;
        }
        if(!s2.empty() or  s[i]!='0')
            {
              s2.push(s[i]);
            }
            i++;
    }
    while(!s2.empty() and k--)
    {
        s2.pop();
    }
    if(s2.empty())
    {
        cout<<'0'<<endl;
        return;
    }
    while(!s2.empty())
    {
        s1+=s2.top();
        s2.pop();
    }

      reverse(s1.begin(),s1.end());
      cout<<s1<<endl;
      return;


    }
int main()
{
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      cin>>k>>s;
      solve(k,s);
      return 0;
}
