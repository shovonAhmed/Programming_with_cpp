#include<bits/stdc++.h>
using namespace std;
vector<int>v(100);
vector<int>prime;

void sieve()
{
    int i,j;
    for(i=4;i<100;i+=2)
    {
        v[i]=1;
    }

    for(i=3;i*i<100;i+=2)
    {
        if(v[i]==0)
        {
            for(j=i*i;j<100;j+=2*i)
                v[j]=1;
        }
    }

    prime.push_back(2);
    for(i=3;i<100;i+=2)
    {
        if(v[i]==0)
        prime.push_back(i);
    }
}

int main()
{
    sieve();
    int i,n,x,y,j;
    x=prime.size();
    while(cin>>n && n)
    {
        vector<int>pf(100);
        while(n--)
        {
            for(j=0;j<x && prime[j]*prime[j]<=n;j++)
            {
                if(n%prime[j]==0)
                {
                    while(n%prime[j]==0)
                    {
                        pf[prime[j]]++;
                        n=n/prime[j];
                        y=prime[j];
                    }
                }
            }
            if(n>1)
            {
                pf[n]++;
                y=n;
            }

        }
        for(i=0; ;i++)
        {
            cout<<pf[prime[i]]<<endl;
            if(y==pf[prime[i]])
                break;
        }


    }
}
