#include <bits/stdc++.h>
using namespace std;
//divideandconquer+binarysearch.cpp
int merge1(int* a,int s,int e)
{
    int mid=(s+e)/2;
    int i=s;
    int j=mid+1;
    int k=s;
    int temp[10000];
    int c=0;
    while(i<=mid && j<=e)
    {
        if(a[i]<=a[j])
        {

            temp[k]=a[i];
            i++;
            k++;
        }
        else
        {
            temp[k++]=a[j++];
            c+=mid-i+1;
        }

    }
    while(i<=mid)
    {
        temp[k++]=a[i++];
    }
    while(j<=e)
    {
        temp[k++]=a[j++];
    }
    for(int i=s;i<=e;i++)
    {
        a[i]=temp[i];
    }

    return c;




}
int inversionc(int* a,int s,int e)
{
    if(s>=e)
    {
        return 0;
    }
     int mid=(s+e)/2;
     int x=inversionc(a,s,mid);
     int y=inversionc(a,mid+1,e);
     int z=merge1(a,s,e);
     return x+y+z;
}
int bsearch(int* a,int n,int key)
{
    int s=0;
    int e=n-1;
    while(s<=e)
    {
        int mid=(s+e)/2;
        if(a[mid]==key)
        {
            return mid;

        }
        else if(a[mid]>key)
        {

            e=mid-1;

        }
        else{


            s=mid+1;
        }


    }
    return -1;




}
int firstocc(int* a,int n,int key)
{

    int s=0;
    int e=n-1;
    int ans=-1;
    while(s<=e)
    {
        int mid=(s+e)/2;

        if(a[mid]<key)
        {
            s=mid+1;
        }
        else if(a[mid]>key)
        {
            e=mid-1;

        }
        else if(a[mid]==key)
        {
            ans=mid;
            e=mid-1;
        }

    }


    return ans;
}
int lastocc(int* a,int n,int key)
{

    int s=0;
    int e=n-1;
    int ans=-1;
    while(s<=e)
    {
        int mid=(s+e)/2;

        if(a[mid]<key)
        {
            s=mid+1;
        }
        else if(a[mid]>key)
        {
            e=mid-1;

        }
        else if(a[mid]==key)
        {
            ans=mid;
            s=mid+1;
        }

    }


    return ans;
}

int findinrotatedarray(int* a,int n,int key)
{
    int s=0;
    int e=n-1;
    while(s<=e)
    {
       int mid=(s+e)/2;
       if(a[mid]==key) return mid;
       else if(a[s]<=a[mid])
       {
           // 2 cses right me ayya ya left me
            if(a[s]<=key and a[mid]>=key)
            {
                e=mid-1;
            }
           else
          {
           s=mid+1;
          }
       }
       else if(a[mid]<=a[e])
       {
           if(a[mid]<=key and a[e]>=key)
           {

               s=mid+1;
           }
           else
           {

               e=mid-1;
           }

       }

    }
    return -1;
}

// monotonic search space trick of binary search by squareroot example

 float sqrt1(int n,int p)
{
    int s=0;
    int e=n;
    float ans=-1;
    while(s<=e)
    {
       int mid=(s+e)/2;
       if(mid*mid==n)
       {
           return mid;
       }
       else if(mid*mid<n)
       {
           ans=mid;
           s=mid+1;
       }
       else
       {
           e=mid-1;
       }
    }
    //return ans;
    // starting me sirf intger part karhee the but here floating point bhi le rahe hai upto a precsision of p;
    //by using  brute  force  approach  it  canbe  done
    float inc=0.1;
    for(int t=1;t<=p;t++)
    {
        while(ans*ans<=n)
        {
            //after coming out of this loop we overshoot the value of ans so ans=ans-inc is done aagya
            ans+=inc;
        }
        ans=ans-inc;
        inc=inc/10;
    }

    return ans;

}
int main{
{

   // int a[]={4,5,1,2,3};
    //int n=sizeof(a)/sizeof(int);
    //cout<<inversionc(a,0,n-1)<<endl;
    //int key=2;
    /* cout<<lastocc( a, n,key)<<endl;
     */
     // present or not
   /*  bool present=binary_search(a,a+n,key);
     if(present)
     {

         cout<<"yes"<<endl;
     }
     else{


        cout<<"No"<<endl;
     }
     //to get the index of the element where it is present
     */
    // auto it=lower_bound(a,a+n,1000);
    /* cout<<(it-a)<<endl;

   auto it1=upper_bound(a,a+n,8);
     cout<<(it1-a)<<endl;
     cout<<it1-it<<endl;
     */
    /* if((it-a)==n)
      {
           cout<<"not present"<<endl;
      }
*/

   //  cout<<findinrotatedarray(a,n,key)<<endl;


     int n,p;
     cin>>n>>p;
     cout<<sqrt1(n,p)<<endl;
     return 0;



}
