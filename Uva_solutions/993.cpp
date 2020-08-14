#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,d,t,n,a[1000];
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n<10)
        {
            cout<<n<<endl;
            continue;
        }
        d=0;
        for(i=9;i>1;i--)
        {
            if(n%i==0)
            {
                while(n%i==0)
                {
                    a[d++]=i;
                    n=n/i;
                }
            }
        }
        sort(a,a+d);
        if(n==1)
        {
            for(i=0;i<d;i++)
                cout<<a[i];
            cout<<endl;
        }
        else
            cout<<-1<<endl;
    }
}
