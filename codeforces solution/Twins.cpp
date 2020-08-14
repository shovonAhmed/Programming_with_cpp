#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,i,x=0,sum=0,cnt=0;
    cin>>n;
    vector<int>v(n);
    for(i=0;i<n;i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    for(i=0;i<n;i++)
    {
        x=x+v[i];
    }
    for(i=n-1;i>=0;i--)
    {
        sum=sum+v[i];
        x=x-v[i];
        cnt++;
        if(sum>x)
            break;

    }

    cout<<cnt<<endl;
}
