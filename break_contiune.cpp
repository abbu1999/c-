#include<iostream>
using namespace std;
int main ()
{
	int i;
/*	for (i=0;i<=15;i++)
	{
	
		cout<<i<<endl;
		if (i==5)
		{	
		break ;//breack the loop
		}
	}
	
	
	cout<<"end came out in here";
*/

 for ( i = 0; i < 10; i++)
    {
        /* code */
        if(i==5)//5 is not print...becautse of contiune ye current statement ko print ni karne deta...
		{
            continue;
        }
        cout<<i<<endl;
    }


	return 0;
}
