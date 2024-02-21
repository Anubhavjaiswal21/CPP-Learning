#include<iostream>
using namespace std;
int main()
{
	int n,i=1;
	cout<<"Enter the number:\n";
	cin>>n;
	cout<<"Table of "<<n<<":\n";
	do{
	
		cout<<n<<"*"<<i<<"="<<n*i<<endl;
		i++;
	}while(i<=10);
}
