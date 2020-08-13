#include <bits/stdc++.h>
//stack using vector
using namespace std;
class Stack{

vector <int> v;
public:
void push(int d)
{
   v.push_back(d);

}

void pop()
{
   v.pop_back();
}


bool empty()
{
return v.empty();

}

int top()
{
int n=v.size();
return v[n-1];

}


};
int main()
{
Stack s;
s.push(0);
s.push(1);
s.push(2);
s.push(3);
s.push(4);
while(!s.empty())
{
    cout<<s.top()<<endl;
    s.pop();
}
}
