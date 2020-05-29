#include<iostream>
using namespace std;
int main()
{
    long long int t,n,k,x,sum,weightLoss,weghtRemains,j=1;
    cin>>t;
    while(t--)
    {
        weightLoss=0;
        cin>>n>>k>>x;
        sum=(n*(n+1))/2;
        for(int i=x;i<=x+k-1;i++)
        {
            weightLoss=weightLoss+i;
        }
        weghtRemains=sum-weightLoss;
        cout<< "Case "<<j<< ": "<<weghtRemains<<endl;
        j++;
    }
}
