#include<iostream>
using namespace std;
int main()
{
    long long int t,a,b,c,i=1;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        if(((a+b)<=c) || ((b+c)<=a) || ((c+a)<=b)|| a<=0 || b<=0 || c<=0)
        {
            cout<< "Case "<<i<< ": Invalid"<<endl;
        }
        else
        {
            if((a==b) && (b==c))
            {
                cout<< "Case "<<i<< ": Equilateral"<<endl;
            }
            else if(a!=b && b!=c && a!=c)
            {
                cout<< "Case "<<i<< ": Scalene"<<endl;
            }
            else
                cout<< "Case "<<i<< ": Isosceles"<<endl;
        }

        i++;
    }
}
