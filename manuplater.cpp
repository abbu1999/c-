#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	//manuplater
	//<<endl
	//setw() it is only used when header file #include<iomanip> is declred....
	
	int a,b,c;
	a=1;
	b=15;
	c=122;
	cout<<"without using setw="<<a<<endl;
	cout<<"without using setw="<<b<<endl;
	cout<<"without using setw="<<c<<endl;
	
	
	
	
	cout<<"using setw="<<setw(4)<<a<<endl;
	cout<<"using setw="<<setw(4)<<b<<endl;
	cout<<"using setw="<<setw(4)<<c<<endl;
	return 0;
}
