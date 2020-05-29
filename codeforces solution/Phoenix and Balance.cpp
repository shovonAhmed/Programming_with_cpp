#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    long long int t,n,a,b,i,j,diff;
    cin>>t;
    while(t--)
    {
        a=b=0;
        cin>>n;
        a=pow(2,n);
        for(i=1;i<n/2;i++)
        {
            a=a+pow(2,i);
        }
        for(j=n/2;j<n;j++)
        {
            b=b+pow(2,j);
        }
        diff=abs(a-b);
        cout<<diff<<endl;
    }
}
