#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,n,k,y,x;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        x=k%(n-1);
        y=k/(n-1);
        if(x==0)
            cout<<k+y-1<<endl;
        else
            cout<<k+y<<endl;
    }
}
