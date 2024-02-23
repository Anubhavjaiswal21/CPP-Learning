#include<iostream>
using namespace std;
int main()
{
	int a,b,choice;
	cout<<"Enter the value of a:"<<endl;
	cin>>a;
	cout<<"Enter the value of b:"<<endl;
	cin>>b;
	cout<<"Tell me the choice:"<<endl;
	cout<<"for addition choose 1"<<endl;
	cout<<"for subtraction choose 2"<<endl;
	cout<<"for division choose 3"<<endl;
	cout<<"for multiplication choose 4"<<endl;
	cin>>choice;
	switch(choice)
	{
		case 1:
			cout<<a+b;
			break;
		case 2:
		    cout<<a-b;
			break;
		case 3:
			cout<<a/b;;
			break;
		case 4:
			cout<<a*b;
			break;
			
		default:
			cout<<"invalid choice";
			break;
	}
	return 0;
}
