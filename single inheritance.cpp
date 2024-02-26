#include<iostream>
using namespace std;
class Base
{
  int data1;
  public:
  int data2;
  void setdata()
  {
    data1=20;
    data2=30;
  }  
  int getdata1();
  int getdata2();
};
int Base::getdata1()
{
    return data1;

}
int Base::getdata2()
{
    return data2;

}
class derived:public Base{
    public:
    int data3;
    void process()
    {
        data3=9;

    }
    void display()
    {
        cout<<data3<<endl;

    }
    
};
int main(){
    Base b;
    b.setdata();
    b.getdata2();
    derived der;
    der.display();
    return 0;
}
