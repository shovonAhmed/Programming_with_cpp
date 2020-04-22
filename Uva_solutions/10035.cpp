#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    long long int a,b;
    while(cin>>a>>b)
    {
        if(a==0 && b==0)
            break;
        int cnt=0,result=0;
        while(a|| b)
        {
            result=((a%10)+(b%10)+result)/10;
            a=a/10;
            b=b/10;
            cnt=cnt+result;
        }
        if(cnt==0)
        {
             printf("No carry operation.\n");
        }
        else if(cnt==1)
        {
            printf("1 carry operation.\n");
        }
        else
             printf("%d carry operations.\n", cnt);
    }
}
