#include<bits/stdc++.h>
using namespace std;
#define m 10000000000

bool isprime(int long long n)
{
    int i;
    for(i=2; i*i<m; i++)
    {
        if(n%i==0)
            return false;
    }
    return true;
}

int main()
{
    long long int i,j,x,y;
    while(cin>>x && x)
    {
        if(isprime(x)==true)
        {
            cout<<1<<endl;
            continue;
        }
        for(i=2;; i++)
        {

            for(j=1; j<32; j++)
            {
                y=pow(i,j)+0.0000000000001;
                if(y>x)
                    break;

                if(y==x)
                    goto end;
            }

        }
        end:
            cout<<j<<endl;
    }
}
