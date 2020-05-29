#include<bits/stdc++.h>
using namespace std;
#define m 10000000
bool v[m];
void sieve()
{
    int i,j;
    for(i=4; i<m; i+=2)
        v[i]=1;
    for(i=3; i*i<=m; i+=2)
    {
        if(v[i]==0)
        {
            for(j=i*i; j<m; j+=2*i)
                v[j]=1;
        }
    }
}

int main()
{
    sieve();
    int i,n,a,b,c,d;
    while(cin>>n)
    {
        if(n<8)
            cout<< "Impossible."<<endl;
        else
        {
            if(n%2==0)
            {
                a=2;
                b=2;
            }
            else
            {
                a=2;
                b=3;
            }
            c=n-(a+b);
            d=0;
            for(i=2;i<c;i++)
            {
                if(v[i]==0 && v[c-i]==0)
                {
                    cout<<a<< " "<<b<< " "<<i<< " "<<c-i<<endl;
                    d=1;
                    break;
                }
            }
            if(d=0)
                cout<< "Impossible."<<endl;
        }
    }
}
