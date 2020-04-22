#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
using namespace std;
int main()
{
    char n[10000];
    long int len,skew,sum;
    while(1)
    {
        gets(n);
        if (strcmp(n, "0") == 0)
			return 0;

        len=strlen(n);
        sum=0;
        for(int i=0; ;i++)
        {
            skew=(n[i]-'0')*(pow(2,len)-1);
            sum=sum+skew;
            len--;
            if(len==0)break;
        }
        cout<< sum<<endl;
    }
}
