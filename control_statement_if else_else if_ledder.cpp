#include<iostream>
using namespace std;
int main()
{
	int age;
	cout<<"enter your age=";
	cin>>age;
	if (age<18)
	{
		cout<<"you are able to came to my party"<<endl;
	}
	
	else if (age==18)
	{
		cout<<"you need to pass for entry"<<endl;
	}
	else
	{
		cout<<"next time";
	}

	return 0;
}
