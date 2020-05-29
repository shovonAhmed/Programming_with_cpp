#include<iostream>
#include<vector>
#include<stdlib.h>
#include<algorithm>
#include <numeric>
using namespace std;
int main()
{
    int t,n,k,i,j,x,total;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        int a[n],b[n];
        for(i=0;i<n;i++)
            cin>>a[i];
        for(j=0;j<n;j++)
            cin>>b[j];
        sort(a,a+n);
        sort(b,b+n,greater<int>());

        x=0;
        for(i=0;i<n;i++)
        {
            if(x==k)
                break;

            if(a[i]<b[i])
            {
                a[i]=b[i];
                x++;
            }

        }
        total=0;
        for(i=0;i<n;i++)
            total=total+a[i];

        cout<<total<<endl;
    }
}
