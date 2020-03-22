#include<iostream>
#include<conio.h>
using namespace std;

class person
{
    public:
    string name;
    int age;

    void display1()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;

    }
};

class student:public person
{
public:
    int id;
    void display2()
    {
        cout<< "id: "<<id<<endl;
        display1();
    }
};


int main()
{
    student ob1;
    ob1.name="Shovon";
    ob1.age=22;
    ob1.id=1714010;
    ob1.display2();


    getch();
}
