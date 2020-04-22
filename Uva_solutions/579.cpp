#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
    double h,m,degree;
    char c;
    while(1)
    {
        cin>>h>>c>>m;
        if(h==0 && m==0)
            break;
        m=m/5;
        if(h>=m)
            degree=(h-m)*30+(m*5)/2;
        else
            degree=(m-h)*30-(m*5)/2;
        if(degree>180)
        {
            cout<<fixed<<setprecision(3)<<360-degree<<endl;
        }
        else
            cout<<fixed<<setprecision(3)<<degree<<endl;

    }
}
