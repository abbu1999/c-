#include<iostream>
using namespace std;

struct ep
{
	int epId;
	char fristNameChar;
	float salary;
};

//user define data type used into combine diffrent type data type...
//diffrence detween structur and array is array only store one type data type at a time like int to int and float to float or char to char.......
//but struct store diffrent data type at a time like upper exp....
int main()
{
	struct ep abbu;
	abbu.epId=2;
	abbu.fristNameChar='A';
	abbu.salary=120000;
	cout<<abbu.epId<<endl;
	cout<<abbu.fristNameChar<<endl;
	cout<<abbu.salary<<endl;	
	return 0;
}
