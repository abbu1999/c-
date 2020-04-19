#include<iostream>
using namespace std;
int main()
{
	int chosse;
	cout<<"enter your chosse 1 and 2 =";
	cin>>chosse;
	switch (chosse)
	{
		case 1:
			{
				cout<<"you are 18";
				break;
			}
			case 2:
				{
					cout<<"you are child";
					break;//if condition is true break throw current statemant in last process...if we don't use break it print current condition and all after condition...
				}
		default:
		{
			cout<<"wait till 18";
			break;
		}	
		
	}
	return 0;
}
