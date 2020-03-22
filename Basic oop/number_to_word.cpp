#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

int main()
{
    int n,num=0,digits;
    cout<< "Enter a number: ";
    cin>>n;

    digits=(int)log10(n);

    while(n!=0)
    {
        num=(num*10)+n%10;
        n/=10;
    }

    digits=digits-((int)log10(num));

    while(num!=0)
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

    while(digits)
    {
        cout<< "zero";
        digits--;
    }

    getch();
}
