#include<iostream>
using namespace std;
int main()
{
    long long int n,i,j,a[100];
    while((cin>>n) && (n>=0))
    {
        for(i=0; ; i++)
        {
            a[i]=n%3;
            n=n/3;
            if(n==0)
            {
                break;
            }
        }
        for(j=i;j>=0;j--)
        {
            cout<<a[j];
        }
        cout<<endl;

    }
}
