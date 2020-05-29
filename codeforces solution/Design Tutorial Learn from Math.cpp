#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    long long int i,j,n,x;
    cin>>n;
    vector<long int>v(n);

    for(i=4;i<=n;i=i+2)
    {
        v[i]=1;
    }

    for(i=3;i*i<=n;i++)
    {
        if(v[i]==0)
        {
            for(j=i*i;j<=n;j=j+i)
            {
                v[j]=1;
            }
        }
    }
    for(i=4;i<n;i=i+2)
    {
        if(v[n-i]==1)
        {
            break;
        }
    }


    cout<<i<< " "<<n-i<<endl;

}
