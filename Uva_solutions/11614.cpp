#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int t;
    long long int n,sum;
    cin>>t;
    while(t--)
    {
        cin>>n;
        sum=(sqrt(1+4*2*n)-1)/2;
        cout<<sum<<endl;
    }
}
