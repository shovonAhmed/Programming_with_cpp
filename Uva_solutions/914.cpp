#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int v[1000005] ;
int prime[80000] ;
int k=0;
void sieve()
{
    int i,j;
    for(i=4; i<=1000000; i+=2)
    {
        v[i]=1;
    }
    for(i=3; i*i<=1000000; i+=2)
    {
        if(v[i]==0)
        {
            for(j=i*i; j<=1000000; j+=i)
            {
                v[j]=1;
            }
        }

    }
    for(i=2;i<=1000000;i++)
    {
        if(v[i]==0)
        {
            prime[k]=i;
            k++;
        }
    }

}

int main()
{
    sieve();
    int i,j,t,l,u,save[5000];
    cin>>t;
    while(t--)
    {
        cin>>l>>u;
        memset(save,0,sizeof(save));

        for(i=0;i<k;i++)
        {
            if(prime[i+1]>u)
                break;
            if(prime[i]>=l && prime[i+1]<=u)
            {
                save[prime[i+1]-prime[i]]++;
            }
        }

        int mx=0,cnt=0;
        for(i=1;i<120;i++)
        {
            if(save[mx]<save[i])
            {
                mx=i;
            }
        }
        for(i=1;i<120;i++)
        {
            if(save[mx]==save[i])
            {
                cnt++;
            }
        }
        if(mx<1 || cnt>1)
            cout<< "No jumping champion"<<endl;
        else
            cout<< "The jumping champion is "<<mx<<endl;

    }
}
