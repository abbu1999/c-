#include<iostream>
using namespace std;
int sum(int ,int );//we are doing function protoype here...
//void g();//kox value ni lega na return karega bas apna kam karega....
void g()//function for print good morning......
{
	cout<<"good morning";
}
int main()
{
	int num1;
	int num2;
	cout<<"enter the number=";
	cin>>num1;
	cout<<"entere the number=";
	cin>>num2;
	cout<<sum(num1,num2);
	g ();//call print good morning funtion.....
	return 0;
}
int sum (int a,int b)
{
	int c=a+b;
	return(c);
}
//agr loi vi function kahi vi likhna ho to fnction prototyping karni hoti h...
//void g()//function for print good morning......
//{
//	cout<<"good morning";
//}
