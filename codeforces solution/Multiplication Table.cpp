#include<iostream>
using namespace std;
int main()
{
    long long int n,x,i,cnt=0;
    cin>>n>>x;
    for(i=1;i<=n;i++)
    {
        if(i*n>=x)
        {
            if(x%i==0)
                cnt++;
        }
    }
    cout<<cnt<<endl;

}
