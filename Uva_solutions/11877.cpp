#include<iostream>
using namespace std;
int main()
{
    int n,rem,sum;
    while((cin>>n) && (n!=0))
    {
        sum=rem=0;
        while(n>=3)
        {
            rem=n%3;
            n=n/3;
            sum=sum+n;
            n=n+rem;
        }

        if(n==2)
        {
            sum++;
        }

        cout<<sum<<endl;
    }
}
