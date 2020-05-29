#include<iostream>
using namespace std;
int main()
{
    int n,k,cnt=0,cnt1=0,cnt2=0;
    cin>>n>>k;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i]==0)
            cnt++;
    }
    if(cnt==n)
        cout<< "0"<<endl;
    else if(a[k-1]==0)
    {
        for(int i=0;i<n;i++)
        {
            if(a[i]>0)
                cnt2++;
        }
        cout<<cnt2<<endl;
    }
    else
    {
        for(int j=0; j<n; j++)
        {
            if(a[j]>=a[k-1])
            {
                cnt1++;
            }
        }
        cout<<cnt1++<<endl;
    }
}
