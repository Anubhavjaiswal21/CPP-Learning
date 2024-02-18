#include<iostream>
using namespace std;
int main()
{
	const int a=8;
	cout<<"the a is "<<a<<endl;
	a=9;//shows error because value is not changeable...
	cout<<"the a is "<<a<<endl;
	return 0;
}
