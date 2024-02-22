#include<iostream>
using namespace std;
int main()
{
	int age;
	cout<<"Tell me your age:";
	cin>>age;
	switch(age)
	{
		case 18:
			cout<<"you are 18";
			break;
		case 0:
		    cout<<"you are 0";
			break;
		case 21:
			cout<<"you are 21";
			break;
		default:
			cout<<"you are not in required age";
			break;
	}
	return 0;
}
