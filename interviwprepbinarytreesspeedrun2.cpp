#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007
//preorder traversal in binary tree
//give me root node as input and recursively build the right and the left subtree// and we can also say that we are building recursively
class node
{
public:
    int data;
    node*left;
    node*right;
    node(int d)
    {
        data=d;
        left=NULL;
        right=NULL;
    }
};
//will return address of root node
node* buildtree()
{
    int d;
    cin>>d;
    if(d==-1)
    {
        return NULL;
    }
     node* root=new node(d);
     root->left=buildtree();
     root->right=buildtree();
    return root;
}
void print(node*root)
{
    if(root==NULL)
    {
        return ;
    }
    cout<<root->data<<" ";
    print(root->left);
    print(root->right);
}
int main()
{
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        node*root=buildtree();
        print(root);
       return 0;
}
