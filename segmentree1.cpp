#include <bits/stdc++.h>
using namespace std;
#define ll long long
// ss and se for  node range ,qs and qe for query range
int query(int* tree,int ss,int se,int qs,int qe,int index)
{
    //complete ovevrlap
    if(ss>=qs && se<=qe)
    {
        return tree[index];
    }
    // no overlap
     if(qs>se || qe<ss)
     {
         return  INT_MAX;
     }
     // partial overlap call on both the sides andupdate ans
     int mid=(ss+se)/2;
     int leftans=query(tree,ss,mid,qs,qe,2*index);
     int rightans=query(tree,mid+1,se,qs,qe,2*index+1);
     return min(leftans,rightans);





}

void buildsegmenttree(int* a,int s,int e,int* tree,int index)  //index represents the indexing of node 1,2,3,4,5, vali,a is original array
{// recursively  build
    //bottom yp hai
    if(s==e)
    {
        tree[index]=a[s];
        return;
    }
      int mid=(s+e)/2;
      buildsegmenttree(a,s,mid,tree,2*index);
      buildsegmenttree(a,mid+1,e,tree,2*index+1);
      tree[index]=min(tree[2*index],tree[2*index+1]);
      return;


}
void updatenode(int* tree,int ss,int se,int i,int incvalue,int index)
{
    //check for no overlap usme jana nai hai
    if(i>se || i<ss)
    {
        return;
    }
    //leaf node
    if(ss==se)
    {
        tree[index]+=incvalue;
        return ;
    }
    int mid=(ss+se)/2;
    updatenode(tree,ss,mid,i,incvalue,2*index);
    updatenode(tree,mid+1,se,i,incvalue,2*index+1);
    //ye vala part codde ka vo hai jab niche se upar jarhe hai
    tree[index]=min(tree[2*index],tree[2*index+1]);
    return;
}
//ab range updatation ki baat hogi ok
void updatearange(int* tree,int ss,int se,int l,int r,int incvalue,int index)
{
     if(l>se || r<ss)
     {
         return;
     }
     if(ss==se)
     {
         tree[index]+=incvalue;
         return;
     }
     int mid=(ss+se)/2;
     updatearange(tree,ss,mid,l,r,incvalue,2*index);
     updatearange(tree,mid+1,se,l,r,incvalue,2*index+1);
     tree[index]=min(tree[2*index],tree[2*index+1]);
     return;


}

int main()
{
  int a[]={1,3,2,-5,6,4};
  int n=sizeof(a)/sizeof(int);
  int* tree=new int[4*n+1];
  buildsegmenttree(a,0,n-1,tree,1);
 // for(int i=1;i<=13;i++)
  //{
    //  cout<<tree[i]<<" ";
  //}
//  cout<<query(tree,0,n-1,l,r,1);
 // updatenode(tree,0,n-1,2,10,1);
  //updatenode(tree,0,n-1,3,15,1);
  updatearange(tree,0,n-1,2,3,10,1);
  int queryno=6;
  while(queryno--)
  {
      int l,r;
      cin>>l>>r;
     cout<< query(tree,0,n-1,l,r,1)<<endl;;
}

  return 0;
}
