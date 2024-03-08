#include<iostream>
using namespace std;
struct employee
{
	int id;
	char batch;
	float salary;
	
};
int main()
{
	struct employee anubhav;
	anubhav.id=31824;
	anubhav.batch='a';
	anubhav.salary=100000;
	cout<<"The id is "<<anubhav.id<<endl;
	cout<<"The batch is "<<anubhav.batch<<endl;
	cout<<"The salary is "<<anubhav.salary<<endl;
	return 0;
}
