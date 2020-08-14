#include<bits/stdc++.h>
using namespace std;
#define ll long long
int bigMod(ll b,ll p,ll m)
{
    if(p==0)
    {
        return 1;
    }
    else if(p%2==0)
    {
        int part1=bigMod(b,p/2,m)%m;
        return (part1*part1)%m;
    }
    else
    {
        int part1=b%m;
        int part2=bigMod(b,p-1,m)%m;
        return (part1*part2)%m;
    }
}

int main()
{
    ll b,p,m;
    while(cin>>b>>p>>m)
    {
        int result=bigMod(b,p,m);
        cout<<result<<endl;
    }
}
