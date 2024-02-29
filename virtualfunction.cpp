#include<iostream>
using namespace std;
class Base
{
    public:
    int var_base1;
    virtual void display() //virtual function: if base class pointer points to the derived class object then run  display of derived class not of base class 
    {
        cout<<"Displaying the value of var_base1 :"<<var_base1<<endl;

    }
};
class Derived : public Base
{
    public:
    int var_base2=1;
    void display()
    {
        cout<<"Displaying the value of var_base2 :"<<var_base2<<endl;
    }
};
int main(){
    Base *base_class_pointer;
    Base baseobj;
    Derived derivedobj;

    base_class_pointer=&derivedobj; 
    base_class_pointer->display();

    return 0;
}