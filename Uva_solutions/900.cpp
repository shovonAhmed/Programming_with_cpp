#include<iostream>
using namespace std;
int main()
{
    int n,i,a[10000];
    while((cin>>n) && (n!=0))
    {
        a[1]=1;
        a[2]=2;
        for(i=3;i<=n;i++)
        {
            a[i]=a[i-2]+a[i-1];
        }
        cout<<a[n]<<endl;
    }
}
