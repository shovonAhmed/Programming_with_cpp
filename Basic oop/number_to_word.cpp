#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,num=0;
    cout<< "Enter a number: ";
    cin>>n;

    while(n!=0)
    {
        num=(num*10)+n%10;
        n/=10;
    }
    while(num)
    {


        switch(num%10)
        {
        case 0:
            cout<< "zero";
                break;
        case 1:
            cout<< "one";
            break;

        case 2:
            cout<< "two";
            break;

        case 3:
            cout<< "three";
            break;

        case 4:
            cout<< "four";
            break;

        case 5:
            cout<< "five";
            break;

        case 6:
            cout<< "six";
            break;

        case 7:
            cout<< "seven";
            break;

        case 8:
            cout<< "eight";
            break;

        case 9:
            cout<< "nine";
            break;

        }
        cout<< " ";
        num=num/10;
    }

    getch();
}
