#include<iostream>
using namespace std;
int main()
{
    long int n,sum;
    while((cin>>n) && n>=0)
    {
        sum=1;
        for(int i=0;i<=n;i++)
        {
            sum=sum+i;
        }
        cout<<sum<<endl;
    }
}
