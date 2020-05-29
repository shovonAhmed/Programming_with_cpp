#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int i=1,t;
    double c,d,f,total;
    cin>>t;
    while(t--)
    {
        cin>>c>>d;
        f=((9*c)/5+32);
        f=f+d;
        total=((f-32)*5)/9;
        cout<< "Case "<<i<< ": "<<fixed<<setprecision(2)<<total<<endl;
        i++;
    }
}
