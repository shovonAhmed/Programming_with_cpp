#include<iostream>
using namespace std;
int main()
{
    int n,x;
    while((cin>>n) && (n!=0))
    {
        int sum=0;
        for(int i=1;i<=n;i++)
        {
            x=i*i;
            sum=sum+x;
        }
        cout<<sum<<endl;
    }
}
