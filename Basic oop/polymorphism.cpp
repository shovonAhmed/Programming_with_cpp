#include<iostream>
#include<conio.h>
using namespace std;

class shape
{
public:
    double dim1,dim2;
    shape(double dim1,double dim2)
    {
        this -> dim1=dim1;
        this -> dim2=dim2;
    }

    virtual double area()
    {
        return 0;
    }
};


class triangle:public shape
{
    public:
    triangle(double dim1,double dim2)
    :shape(dim1,dim2)
    {

    }
    double area()
    {
        return 0.5*dim1*dim2;
    }

};

class rectangle:public shape
{
    public:
    rectangle(double dim1,double dim2)
    :shape(dim1,dim2)
    {

    }
    double area()
    {
        return dim1*dim2;
    }

};

int main()
{
    shape *s;
    triangle t(3.8,8);
    rectangle r(4,9);

    s=&t;
    cout<< "Area of triangle: "<<s->area() <<endl;

    s=&r;
    cout<< "Area of rectangle: "<< s->area() <<endl;

    getch();


}
