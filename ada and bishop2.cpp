//ada and bishop 2 march long

#include <iostream>
using namespace std;
void printpathtfrom()
{
    cout<<1<<" "<<1<<"\n";
    cout<<8<<" "<<8<<"\n";
    cout<<7<<" "<<7<<"\n";
    cout<<8<<" "<<6<<"\n";
    cout<<3<<" "<<1<<"\n";
    cout<<1<<" "<<3<<"\n";
    cout<<6<<" "<<8<<"\n";
    cout<<5<<" "<<7<<"\n";
    cout<<4<<" "<<8<<"\n";
    cout<<1<<" "<<5<<"\n";
    cout<<5<<" "<<1<<"\n";
    cout<<8<<" "<<4<<"\n";
    cout<<7<<" "<<3<<"\n";
    cout<<8<<" "<<2<<"\n";
    cout<<7<<" "<<1<<"\n";
    cout<<1<<" "<<7<<"\n";
    cout<<2<<" "<<8<<"\n";


}
int main() {
 int  t;
 cin>>t;
 while(t--)
 {
     int r0,c0;
     cin>>r0>>c0;
     if(r0==1 && c0==1)
     {
         cout<<17<<endl;
         printpathtfrom();

     }
     else if(r0==c0)
     {
         cout<<18<<endl;
         cout<<r0<<" "<<c0<<endl;
         printpathtfrom();
     }
     else
     {
         cout<<19<<endl;

         cout<<r0<<" "<<c0<<endl;
         int r1=(r0+c0)/2;
         cout<<r1<<" "<<r1<<endl;
         printpathtfrom();
     }



 }
	return 0;
}
