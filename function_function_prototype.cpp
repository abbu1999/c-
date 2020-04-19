#include<iostream>
using namespace std;
	
int sum (int a,int b)//a and b is formal parameater
{
int c=a+b;
return (c);
}
	


int main()
{
	int num1,num2;//actual parameter=those value jo function ko pass ki jati h....iske m jo user dega value usse actual parameter bolege....
		cout<<"enter the number=";
	cin>>num1;
	cout<<"enter the number=";
	cin>>num2;
	cout<<sum(num1,num2);
	
		
	return 0;
}

	
