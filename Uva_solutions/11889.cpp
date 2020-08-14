#include<bits/stdc++.h>
using namespace std;
#define m 10000000
#define ll long long int
vector<int>v(m);
vector<int>prime;

void sieve()
{
    ll i,j;
    for(i=4; i<m; i+=2)
        v[i]=1;
    for(i=3; i*i<m; i+=2)
    {
        if(v[i]==0)
        {
            for(j=i*i; j<m; j+=2*i)
                v[j]=1;
        }
    }

    prime.push_back(2);

    for(i=3; i<m; i+=2)
    {
        if(v[i]==0)
            prime.push_back(i);
    }

}

ll solve(ll a,ll c)
{
    ll i,ans=1,cnt1,cnt2;
    for(i=0;i<500 && prime[i]<=a && prime[i]<=c; i++)
    {
        cnt1=cnt2=0;
            while(a%prime[i]==0)
            {
                a=a/prime[i];
                cnt1++;
            }

            while(c%prime[i]==0)
            {
                c=c/prime[i];
                cnt2++;
            }


        if(cnt2>cnt1)
            ans=ans*(pow(prime[i],cnt2)+0.000000000001);
    }

    if(c>1 && a==1)
        ans=ans*c;
    return ans;
}

int main()
{
    sieve();
    ll a,c,t;
    cin>>t;

    while(t--)
    {
        cin>>a>>c;
        if(c%a!=0)
            cout<<"NO SOLUTION"<<endl;
        else
        {
            cout<<solve(a,c)<<endl;
        }
    }
}
