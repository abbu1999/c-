#include<iostream>
using namespace std;
int main()
{
	int a,b;
	//a=4;
	//b=5;
	cout<<"enter the first value=";
	cin>>a;
	cout<<"enter the second value=";
	cin>>b;
	//arithmatic oprators
/*	cout<<"the value of + is="<<(a+b)<<endl;
	cout<<"the value of - is="<<(a-b)<<endl;
	cout<<"the value of * is="<<(a*b)<<endl;
	cout<<"the value of / is="<<(a/b)<<endl;
	cout<<"the value of % is="<<(a%b)<<endl;
	cout<<"the value of a++ is="<<(a++)<<endl;//postfix opration print current value first then do increement and decrement depand on opration...
	cout<<"the value of a-- is="<<(a--)<<endl;//upper increment oprator se value add ho gayi or postpix m phale print hota then opration perform hote h...
	cout<<"the value of b++ is="<<(b++)<<endl;
	cout<<"the value of b-- is="<<(b--)<<endl;
    cout<<"the value of ++a is="<<(++a)<<endl;//prefix opration doing  increment and dcrement opration first then print the value...
	cout<<"the value of --a is="<<(--a)<<endl;
	cout<<"the value of ++b is="<<(++b)<<endl;		
	cout<<"the value of --b is="<<(--b)<<endl;*/

	
//compersion opration
//print ans in the form of 0 and 1 if condition true ans is 1 and if condition is faluse ans is 0...
/*cout<<"the ans of=="<<(a==b)<<endl;
cout<<"the ans of<"<<(a<b)<<endl;
cout<<"the ans of>"<<(a>b)<<endl;
cout<<"the ans of<="<<(a<=b)<<endl;//in this both condition if one or both condtion is true then ans is print in 1 if one and both contion is false ans is 0...
cout<<"the ans of>="<<(a>=b)<<endl;
*/

//logical oprators

cout<<"the ans is="<<(a==b) && (a<b) ;//ouccr confusion on conspect
cout<<"the ans is="<<(a==b) || (a<b); //one condition true honi chiye
cout<<"the ans is="<<!(a==b) ;//not oprator ans 0 h to 1 print karga or 1 hoga to 0 print karega



	return 0;
}
