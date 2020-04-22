#include<iostream>
using namespace std;
int main()
{
    int g;
    while((cin>>g) && g)
    {
        long long int sum=0,j=0,k=1;
        for(int i=1;i<=g;i++)
        {
            sum=j+k;
            j=k;
            k=sum;
        }
        cout<<k<<endl;
    }
}
