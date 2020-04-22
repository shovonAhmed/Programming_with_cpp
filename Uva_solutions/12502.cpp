#include<iostream>
using namespace std;
int main()
{
    int t,x,y,z,family_a;
    cin>>t;
    while(t--)
    {
        cin>>x>>y>>z;
        family_a=(z*(2*x-y)/(x+y));
        cout<<family_a<<endl;
    }
}
