#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
    double u,v,a,t,s;
    int n,i=1;
    while((cin>>n) && (n!=0))
    {
        if(n==1)
        {
            cin>>u>>v>>t;
            s=((u+v)/2)*t;
            a=(v-u)/t;
            cout<< "Case "<<i<< ": "<<fixed<<setprecision(3)<<s<< " "<<a<<endl;
        }

        else if(n==2)
        {
            cin>>u>>v>>a;
            t=(v-u)/a;
            s=((u+v)/2)*t;
            cout<<"Case "<<i<< ": "<<fixed<<setprecision(3)<<s<< " "<<t<<endl;
        }

        else if(n==3)
        {
            cin>>u>>a>>s;
            v=sqrt(u*u+(2*a*s));
            t=(v-u)/a;
            cout<< "Case "<<i<< ": "<<fixed<<setprecision(3)<<v<< " "<<t<<endl;
        }

        else if(n==4)
        {
            cin>>v>>a>>s;
            u=sqrt(v*v-(2*a*s));
            t=(v-u)/a;
            cout<< "Case "<<i<< ": "<<fixed<<setprecision(3)<<u<< " "<<t<<endl;
        }
        i++;

    }
}
