#include<iostream>
#include<conio.h>
using namespace std;

class overload
{
    public:
        int add(int a,int b)
        {
            cout<< "Sum of a and b is: "<<a+b<<endl;
        }

        int add(int a,int b,int c)
        {
            cout<< "Sum of a,b and c is: "<<a+b+c<<endl;
        }
        int add()
        {
            cout<<"Nothing to add "<<endl;
        }

};



int main()
{
    overload over;
    over.add(5,7);
    over.add(5,7,10);
    over.add();

    getch();
}
