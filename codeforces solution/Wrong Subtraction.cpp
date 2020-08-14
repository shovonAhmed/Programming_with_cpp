#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,k,i;
    cin>>n>>k;
    for(i=k;i>0;i--)
    {
        if(n%10==0)
        {
            n=n/10;
        }
        else
            n=n-1;
    }
    cout<<n<<endl;
}
