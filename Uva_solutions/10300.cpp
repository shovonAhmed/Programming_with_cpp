#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int f=0,total=0;
        cin>>f;
        while(f--)
        {
            int sum=0,x=0,y=0,z=0;
            cin>>x>>y>>z;
            sum=x*z;
            total=total+sum;

        }
        cout<<total<<endl;
    }
}
