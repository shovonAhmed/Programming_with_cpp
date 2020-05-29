#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int>v(32770);
vector<int>prime;
void sieve()
{
    int i,j;
    for(i=4; i<=32768; i+=2)
        v[i]=1;
    for(i=3; i*i<=32768; i+=2)
    {
        if(v[i]==0)
        {
            for(j=i*i; j<=32768; j+=i)
                v[j]=1;
        }
    }
    for(i=2; i<=32768; i++)
    {
        if(v[i]==0)
            prime.push_back(i);
    }
}

int main()
{
    sieve();
    int n,i,j,x,cnt;
    while(cin>>n && n)
    {
        cnt=0;
        for(i=0;i<prime.size();i++)
        {
            if(prime[i]+prime[i]>n)
                break;

            x=n-prime[i];
            if(binary_search(prime.begin(),prime.end(),x)==1)
                cnt++;
        }
        cout<<cnt<<endl;
    }
}
