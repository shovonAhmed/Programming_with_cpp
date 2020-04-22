#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a,b,x;
    while(cin>>a>>b)
    {
        int count=0;
        if(a==0 && b==0)
        {
            break;
        }
        for(int i=a;i<=b;i++)
        {
            x=sqrt(i);
            if(x*x==i)
            {
                count++;
            }
        }
        cout<< count<<endl;
    }
    return 0;
}
