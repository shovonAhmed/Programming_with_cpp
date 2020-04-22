#include<iostream>
using namespace std;
int main()
{
    int n,i,count=1;
    for(i=2; ;i++)
    {
        rem=i;
        while(rem%2!=1)
        {
            n=rem/2;
            rem=n;
        }
        while(rem%3!=2)
        {
            n=rem/3;
            rem=n;
        }
        while(rem%5)


    }
}
