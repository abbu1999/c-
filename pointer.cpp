#include<iostream>
using namespace std;
int main()
{
	int a=5;
	               // (*) is called derefrence oprator....
	int *b=&a;     //in this sitution *b hold the address of a....
	cout<<b<<endl;// we input address of a in b....and b is also is data type so b also have own address...
	             // (&) is called address of oprator slow the address of data type value..
	cout<<&a<<endl;
	cout<<*b;//(*b) jis ka address hold kara h uske ander ky value h vo bata ra h.....
//	int **c=&b;
//	cout<<&b<<endl;//jo b ke ander address store h a ka vo print hoga....
//	cout<<c;
//	cout<<*c<<endl;print the value of insife b...
//	cout<<**c<<endl;//print karega a ki value...
	
	
	
	
	
	
	
	return 0;
}
