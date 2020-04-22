#include<iostream>
using namespace std;
int main()
{
    long int x,sum;
    while(cin>>x)
    {
        sum=(x*x*(x+1)*(x+1))/4;
        cout<<sum<<endl;
    }
}
