#include<iostream>
#include<conio.h>
using namespace std;

class person
{
    public:
    void display1()
    {
        cout<<"Person"<<endl;

    }
};

class student:public person
{
    public:
    void display1()
    {
        cout<<"Student"<<endl;

    }
};

class teacher:public person
{
    public:
    void display1()
    {
        cout<<"Teacher"<<endl;

    }
};




int main()
{
    person p;
    p.display1();

    student s;
    s.display1();

    teacher t;
    t.display1();

    getch();
}
