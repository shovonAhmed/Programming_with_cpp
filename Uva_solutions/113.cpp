#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
    double p,n;
    while(cin>>n>>p)
    {

        cout<<fixed<<setprecision(0)<<pow(p,1/n)<<endl;
    }
}
