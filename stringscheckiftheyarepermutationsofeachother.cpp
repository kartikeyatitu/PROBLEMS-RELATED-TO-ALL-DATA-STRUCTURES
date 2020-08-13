#include <iostream>
using namespace std;

int main(){
	char in[100];
	char in1[100];
	cin>>in;
    cin>>in1;
    int i,j;
    int c=0;
	int freq[26]={0};
    int freq1[26]={0};
	for(i=0;in[i]!='\0';i++){
		char ch = in[i];
		int index = ch - 'a';
		freq[index]++;
	}
	for( i=0;in1[i]!='\0';i++){
		char ch1 = in1[i];
		int index1 = ch1 - 'a';
		freq1[index1]++;
	}
	for( i=0;i<=25;i++)
    {
        int index,index1;
        if(freq[index]==freq1[index1])
        {

        }
        else
        {
            cout<<"not permutation"<<endl;
            break;
        }
    }
    if(i==26)

    {
        cout<<"permutation"<<endl;
    }

return 0;
}
