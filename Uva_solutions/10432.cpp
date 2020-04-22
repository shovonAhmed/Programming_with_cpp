#include<iostream>
#include<cmath>
#include<iomanip>
#define pi acos(-1)
using namespace std;
int main()
{
    double n,r,area;
    while(cin>>r>>n)
    {
        area=((n*r*r)/2)*sin(2*pi/n);
        cout<<fixed<<setprecision(3)<<area<<endl;
    }
}
