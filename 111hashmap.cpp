#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
int main()
{
    unordered_map<string, int> mymap;
    mymap["orange"]=220;//1st way insert
    mymap["kiwi"]=130;//1st way insert
    mymap["chiko"]=190;//1st way insert
    mymap["banana"]=120;//1st way insert
    mymap["mango"]=100;//1st way insert
    mymap.insert(make_pair("apple",120));//2nd way//this insert functio =n excepts a pair
    pair<string,int> p("guava",130);
    mymap.insert(p);
    //print
    for(auto node:mymap)
    {
        cout<<node.first<<","<<node.second;

        cout<<endl;
    }
    int n=mymap.bucket_count();
    cout<<n<<endl;
    for(int i=0;i<mymap.bucket_count();i++)
    {
        cout<<"bucket"<<i<<"->";
        for(auto it=mymap.begin(i);it!=mymap.end(i);it++)//it is pointer to pair
        {
            //it is pointer to pair
            cout<<it->first<<","<<it->second;
        }
        cout<<endl;

    }

}
