#include<bits/stdc++.h>
using namespace std;
vector<int>v(10000);
vector<int>prime;
void sieve()
{
    int i,j;
    for(i=4;i<=10000;i+=2)
        v[i]=1;
    for(i=3;i*i<=10000;i+=2)
    {
        if(v[i]==0)
        {
            for(j=i*i;j<=10000;j+=i)
                v[j]=1;
        }
    }

}


int main()
{
    sieve();
    int i,j,t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        n=(n/2)+1;
        for(i=n; ;i++)
        {
            if(v[i]==0)
            {
                break;
            }

        }
        cout<<i<<endl;
    }
}
