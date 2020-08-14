#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,i,cnt;
    while(cin>>n && n)
    {
        cnt=0;
        for(i=1;i<=sqrt(n);i++)
        {
            if((i*i)<=n)
                cnt++;
            if(2*(i*i)<=n)
                cnt++;
        }
        cout<<n-cnt<<endl;
    }
}
