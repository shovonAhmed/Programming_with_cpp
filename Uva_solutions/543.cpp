#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int>v(1000001);
vector<int>prime;
void sieve()
{
    int i,j;
    for(i=4; i<=1000000; i+=2)
        v[i]=1;
    for(i=3; i*i<=1000000; i+=2)
    {
        if(v[i]==0)
        {
            for(j=i*i; j<=1000000; j+=i)
                v[j]=1;
        }
    }
    for(i=2; i<=1000000; i++)
    {
        if(v[i]==0)
            prime.push_back(i);
    }
}

int main()
{
    sieve();
    int i,j,n,x;
    while(cin>>n)
    {
        for(i=0; i<prime.size(); i++)
        {
            x=n-prime[i];
            if(binary_search(prime.begin(),prime.end(),x)==1)
            {
                cout<<n<< " = "<<prime[i]<< " + "<<x<<endl;
                break;
            }
        }
    }
}
