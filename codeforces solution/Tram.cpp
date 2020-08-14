#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,i,n;
    vector<int>in;
    vector<int>out;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a>>b;
        out.push_back(a);
        in.push_back(b);
    }
    int k=0,sum;
    sum=in[k]-out[k+1]+in[k+1];
    int max=sum;
    for(i=1;i<n-2;i++)
    {
        sum=sum-out[k+2]+in[k+2];
        if(sum>max)
            max=sum;
        k++;
    }
    int x=*max_element(in.begin(),in.end());
    if(max<x)
        cout<<x<<endl;
    else
        cout<<max<<endl;
}
