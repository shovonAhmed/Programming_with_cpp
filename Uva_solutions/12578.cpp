#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
#define PI acos(-1.0)
int main()
{
    int t;
    double radius,width,circle,rectangle,l;
    cin>>t;
    while(t--)
    {
        cin>>l;
        radius=(l/10.00)*2.00;
        width=(l/10.00)*6.00;
        circle=PI*radius*radius;
        rectangle=(l*width)-circle;

        cout<<fixed<<setprecision(2)<< circle<< " "<<rectangle<<endl;
    }
}
