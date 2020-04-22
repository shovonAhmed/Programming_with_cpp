#include<iostream>
using namespace std;
int main()
{
    int t,s,d,a,b;
    cin>>t;
    while(t--)
    {
        cin>>s>>d;
        if((s>=d) && (s+d)%2==0)
        {
            a=(s+d)/2;
            b=s-a;
            if(a>b)
            {
                cout<<a<< " "<<b<<endl;
            }
            else
                cout<<b<< " "<<a<<endl;
        }
        else
        {
            cout<< "impossible"<<endl;

        }


    }
}
