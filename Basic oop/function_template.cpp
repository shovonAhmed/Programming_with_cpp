/*By using template function we can handle
 different data types through one function.
 Here we have used same parameter(int+int,double+double)
 */

#include<iostream>
#include<conio.h>
using namespace std;

template <class parameter>
parameter add(parameter a,parameter b)
{
    return a+b;
}

int main()
{
    cout<< "addition of integer value: "<<add(3,8)<<endl;
    cout<< "addition of double value: "<<add(5.6,8.3)<<endl;

    getch();
}

