#include <bits/stdc++.h>
using namespace std;
#define ll long long
/*reverse a stack using extra stack*/
void helper(stack<int> &s,stack<int> &s1,int n)
{
        for(int i=0;i<n;i++)
        {
            s1.push(s.top());
            s.pop();
        }
}
void reversestack(stack<int> &s)
{
    stack<int> s1;
    int n=s.size();
    for(int i=0;i<n;i++)
    {
        int ele=s.top();
        s.pop();
        //add remaining n-1-i elements in stack s1
        helper(s,s1,n-i-1);
        // push ele in ,
        s.push(ele);
        //transfer remaining elements in s from s1
        helper(s1,s,n-i-1);
    }
}



int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  stack<int> s;
  s.push(4);
  s.push(3);
  s.push(2);
  s.push(1);
  reversestack(s);
  while(!s.empty())
  {

      cout<<s.top()<<" ";
      s.pop();
  }
  return 0;
}
