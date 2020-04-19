#include<iostream>
using namespace std;
int c=45;
int main()
{
	int a,b,c;
	float e=45.4;
	float f=34.4f;
	long double g=45.4;
	long double h=34.4l;
	double i=14.5;
	double q=14.5d;
	int &z=::c;//make z refrence variable of globle variable int c....
//cout<<"enter the value=";
//cin>>a;
//cout<<"enter the value=";
//cin>>b;
//c=a+b;
//cout<<"the sum is="<<c <<endl;
//cout<<"the sum is="<<::c; // ::(scope resulation oprator ) is use to take global variable into local variable.... 

//cout<<"the size of"<< sizeof(45.4)<<endl;//in c++ any decimal value like 45.4 is not floting value it is by defalut double for make it in float simlply add f in the end of the value
//cout<<"the size of"<< sizeof(34.4f)<<endl;
//cout<<"the size of"<< sizeof(45.4)<<endl;//also apply this case in this condition...
//cout<<"the size of"<< sizeof(45.4l)<<endl; double contain 8 byte and long double contain 16 bytes...

//cout<<"the size of"<< sizeof(14.5)<<endl;//double contain only 8 byte...
//cout<<"the size of"<< sizeof(14.5d)<<endl;

//verible reffrence

cout<<"THE value of global variable is "<<::c <<endl;

cout<<"the value of refrence variable z="<<z;


return 0;
}
