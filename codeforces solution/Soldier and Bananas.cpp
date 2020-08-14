#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int k,n,w,i,sum=0,x;
    cin>>k>>n>>w;
    for(i=1;i<=w;i++)
    {
        sum=sum+(k*i);
    }
    x=sum-n;
    if(x<1)
        cout<<0<<endl;
    else
        cout<<x<<endl;
}
