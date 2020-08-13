#include <bits/stdc++.h>
using namespace std;
//stacks and questions on it based on lifo last infirst out . 1,2,3,4 insert karogay to 4,3,2,1 aayega pop karane pe..
//real life applications of stack are...   1.stack of books in almira in our library 2. pile of plates is a stack.. plates that are washed at last come above than the plates that are washed at last
//atm machine me jo box hota hia usme notes zhai jaise a 100 ki to vo top se aati hai
//implementation using cector
#define ll long long
class Stack
{
private :
    vector<int> v;
public:
  void push(int data)
  {

      v.push_back(data);
  }
  bool empty()
  {
      return v.size()==0;
  }
  void pop()
  {
      if(!empty())
      {
          v.pop_back();
      }

  }
  int top()
  {
      return v[v.size()-1];
  }

};

int main()
{
    Stack s;
  std::ios::sync_with_stdio(false); cin.tie(NULL);
  for(int i=1;i<=6;i++)
  {
      s.push(i*i);

  }
  while(!s.empty())
  {
      cout<<s.top()<<endl;
      s.pop();
  }
  return 0;
}
