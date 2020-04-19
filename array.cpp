#include <iostream>
using namespace std;
int main()
{
/* int marks[10]={1,2,3,4,5,6,7,8,9,10};
 cout<<marks[0]<<endl;
cout<<marks[1]<<endl;
cout<<marks[2]<<endl;
cout<<marks[3]<<endl;
cout<<marks[4]<<endl;
cout<<marks[5]<<endl;*/
//also do like this
int marks[4];
marks[0]=1;
marks[1]=10;
marks[2]=100;
marks[3]=100;

//cout<<marks[0]<<endl;
//cout<<marks[1]<<endl;
//marks[2]=50;//value change in here...
//cout<<marks[2]<<endl;
//cout<<marks[3]<<endl;
 
int i;
for(i=0;i<4;i++)
{
    cout<<marks[i]<<endl;
}

    return 0;
}