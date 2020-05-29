#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    long long int t,n,sum;
    cin>>t;
    while(t--)
    {
        sum=0;
        cin>>n;
        sum=(n*(n+1))/2;
        if(sum%3==0)
            cout<< "YES"<<endl;
        else
            cout<< "NO"<<endl;
    }
}
