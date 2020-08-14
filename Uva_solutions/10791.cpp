#include<bits/stdc++.h>
using namespace std;
#define m 1000000
typedef long long ll;
vector<int>v(m);
vector<int>prime;

void sieve()
{
    ll i,j;
    for(i=4;i<m;i+=2)
    {
        v[i]=1;
    }
    for(i=3;i*i<m;i+=2)
    {
        if(v[i]==0)
        {
            for(j=i*i;j<m;j+=2*i)
            {
                v[j]=1;
            }
        }
    }

    prime.push_back(2);

    for(i=3;i<m;i+=2)
    {
        if(v[i]==0)
            prime.push_back(i);
    }
}

int main()
{
    sieve();
    ll n,i,cnt,x,sum,y,multi,z=1;
    x=prime.size();
    while(cin>>n && n)
    {
        y=n;
        if(n==1)
        {
            cout<<"Case "<<z<<": "<<2<<endl;
            z++;
            continue;
        }
        cnt=0;
        sum=0;
        for(i=0;i<x && prime[i]*prime[i]<=n;i++)
        {
            multi=1;
            if(n%prime[i]==0)
            {
                cnt++;
                while(n%prime[i]==0)
                {
                    multi=multi*prime[i];
                    n=n/prime[i];
                }
                sum=sum+multi;
            }
        }
        if(cnt==0 && n>1)
            sum=y+1;
        if(cnt==1 && n==1)
            sum=y+1;
        if(cnt>=1 && n>1)
            sum=sum+n;
        cout<<"Case "<<z<<": "<<sum<<endl;
        z++;

    }
}
