#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int a,b,i=1,t;
    cin>>t;

    while(t--)
    {
        int sum=0;
        cin>>a>>b;
        if(a>b)
        {
            swap(a,b);
        }
        while(a<=b)
        {
            if(a%2==1)
            {
                sum=sum+a;
            }
            a++;
        }
        cout<< "Case "<<i<< ": "<<sum<<endl;
        i++;
    }
}

