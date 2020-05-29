#include<bits/stdc++.h>
#define ull unsigned long long int
using namespace std;
bool isprime(int n)
{
    ull  i;
    for(i=2; i*i<=n; i++)
    {
        if(n%i==0)
        {
            return 0;
            break;
        }
    }
    return 1;
}


int main()
{
    ull i,n,x,check;
    while(cin>>n && n)
    {
        x=(pow(2,(n-1))*(pow(2,n)-1))+0.000000000001;
        check=pow(2,n)-1;

        if(isprime(check)==1 && isprime(n)==1)
            cout<< "Perfect: "<<x<< "!"<<endl;
        else if(isprime(check)==0 && isprime(n)==1)
            cout<< "Given number is prime. But, NO perfect number is available."<<endl;
        else
            cout<< "Given number is NOT prime! NO perfect number is available."<<endl;
    }
}
