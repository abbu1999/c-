#include<iostream>
using namespace std;
int main()
{
	int a=10;
	float f=9.45;
	int c,z,x;
	
	cout<<"the value of a="<<a <<endl; 
	cout<<"the value of f="<<f <<endl;
	cout<<"the value of a="<<(float)a <<endl;//also written like this....
	cout<<"the value of a="<<float(a) <<endl;//and thsi way also...
	cout<<"the value of f="<<(int)f <<endl;
	cout<<"the value of f="<<int (f)<<endl;
	cout<<"the sun is="<< a+f <<endl;	
		cout<<"the sum is="<<a+int (f)<<endl;//when two interzer variable have action then always ans is interzer value....
			cout<<"the value of f="<<a+int (f)<<endl;
	c=int(f);//put one variable value in another variable....
	z=f;//
	x=a;
	cout<<"the value of c="<<c<<endl;
		cout<<"the value of z="<<z<<endl;
			cout<<"the value of x="<<x<<endl;
		
	
	return 0;
}
