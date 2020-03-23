/*By using template function we can handle
 different data types through one function.
 Here we have used different parameter(double+int)
 */

#include<iostream>
#include<conio.h>
using namespace std;

template <class parameter1,class parameter2>
parameter1 add(parameter1 a,parameter2 b)
{
    return a+b;
}

int main()
{
    cout<< "addition of integer value: "<<add(3.2,8)<<endl;

    getch();
}
