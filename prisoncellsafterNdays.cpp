#include<bits/stdc++.h>
using namespace std;
int n;
vector<int> prisons(vector<int> &v,int n)
{
     unordered_map<string,int> m;
     for(int i=0;i<n;++i)
      {
        string s(v.begin(),v.end());
        if(m.find(s)!=m.end())//loop detected and we have solved all the other states for the question
        {
          int looplength=i-m[s];
          int remaining=(n-i)%looplength;
          return prisons(v,remaining);
       }
      else
      {
          m[s]=i;
          int prev=v[0];
          for(int j=1;j<7;++j)
          {
              int next=v[j+1];
              int curr=v[j];
              if(prev==next)
              {
                  v[j]==1;
              }

              prev=curr;
           }
      }
      v[0]=0;
      v[7]=0;
}
return true;
}
int main()
{
    cin>>n;
    vector<int> v;
    for(int i=0;i<8;i++)
    {
        cin>>v[i];
    }
    for(int i=0;i<8;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    prisons(v,n);
    for(int i=0;i<8;i++)
    {
        cout<<v[i]<<" ";
    }


    return 0;
}
