#include<bits/stdc++.h>
using namespace std;
#define m 10000000
vector<int>v(m);
vector<int>prime;

void sieve()
{
    long long int i,j;
    for(i=4;i<m;i+=2)
    {
        v[i]=1;
    }

    for(i=3;i*i<m;i+=2)
    {
        if(v[i]==0)
        {
            for(j=i*i;j<m;j+=2*i)
                v[j]=1;
        }
    }

    prime.push_back(2);
    for(i=3;i<m;i+=2)
    {
        if(v[i]==0)
        {
            prime.push_back(i);
        }
    }
}

int main()
{
    sieve();
    long long int i,n,x,cnt,y;
    x=prime.size();
    while(cin>>n && n)
    {
        if(n<0)
            n=-n;
        cnt=0;
        for(i=0;i<x && prime[i]*prime[i]<=n;i++)
        {
            if(n%prime[i]==0)
            {
                cnt++;
                while(n%prime[i]==0)
                {
                    n=n/prime[i];
                    y=prime[i];
                }
            }
        }
        if(n>1)
        {
            cnt++;
            if(cnt>1)
                cout<<n<<endl;
            else
                cout<<-1<<endl;
        }

        else
        {
            if(cnt>1)
                cout<<y<<endl;
            else
                cout<<-1<<endl;
        }

    }
}
