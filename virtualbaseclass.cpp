#include <iostream>
using namespace std;
class Student
{
protected:
    int rollnumber;

public:
    void setrollnumber(int a)
    {
        rollnumber = a;
    }
    void printrollnumber()
    {
        cout << "The roll number is " << rollnumber << endl;
    }
};
class Test : virtual public Student
{
protected:
    float maths;
    float physics;

public:
    void setmarks(float m1, float m2)
    {
        maths = m1;
        physics = m2;
    }
    void printmarks(void)
    {
        cout << "Marks obtained:" << endl
             << "Maths : " << maths << endl
             << "physics :" << physics << endl;
    }
};
class Sports : virtual public Student
{
protected:
    int score;

public:
    void setscore(int r)
    {
        score = r;
    }
    void printscore(void)
    {
        cout << "your score is " << score << endl;
    }
};
class Result : public Test, public Sports
{
protected:
    int total;

public:
    void printresult()
    {
        printrollnumber();
        printmarks();
        printscore();
        total = maths + physics + score;
        cout << "Your total score is: " << total << endl;
    }
};
int main()
{
    Result anu;
    anu.setrollnumber(31824);
    anu.setmarks(90, 90);
    anu.setscore(9);
    anu.printresult();
    return 0;
}