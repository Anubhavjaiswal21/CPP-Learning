#include<iostream>
using namespace std;
class Student
{
    protected:
    int rollnumber;
    public:
    void setrollnumber(int r)
    {
        rollnumber=r;
    }
    void getrollnumber(void)
    {
        cout<<"The roll number is "<<rollnumber<<endl;
    }
};
class Exam:public Student
{
   protected:
   float maths;   
   float physics;   
   public:
   void set_marks(float m1,float m2)
   {
    maths=m1;
    physics=m2;

   }
   void get_marks()
   {
    cout<<"The marks of maths is: "<<maths<<endl;
    cout<<"The marks of physics is: "<<physics<<endl;
   }

};
class Result:public Exam
{
    protected:
    float percentage;
    public:
     void setpercentage()
     {
        percentage=(maths+physics)/2;
     }
    void displayresult()
    {
        getrollnumber();
        get_marks();
        cout<<"The result is: "<<percentage<<"%"<<endl;

    }
};
int main(){
    Result anu;
    anu.setrollnumber(21);
    anu.set_marks(91.5,93.5);
    anu.displayresult();
    return 0;
}