#include<bits/stdc++.h>
#define M 100000000
using namespace std;
bool v[M];
vector<long long int>twin(M);
void sieve()
{
    long long int i,j;
    v[1]=1;
    for(i=4;i<M;i+=2)
        v[i]=1;
    for(i=3;i*i<=M;i+=2)
    {
        if(v[i]==0)
        {
            for(j=i*i;j<M;j+=2*i)
                v[j]=1;
        }
    }
}

int main()
{
    sieve();
    int n,i;
    while(cin>>n)
    {
        int cnt=0;
        if(n==1)
            cout<< n<<" is not the sum of two primes!"<<endl;
        else if(n%2)
        {
            if(v[n-2]==0)
            {
                cout<<n<< " is the sum of "<<2 << " and "<<n-2<< "."<<endl;
            }
            else
                cout<< n<<" is not the sum of two primes!"<<endl;
        }

        else
        {
            for(i=n/2+1;i<n;i++)
            {
                if(v[i]==0 && v[n-i]==0)
                {
                    cout<<n<< " is the sum of "<<n-i << " and "<<i<< "."<<endl;
                    cnt=1;
                    break;
                }
            }
            if(cnt==0)
                cout<< n<<" is not the sum of two primes!"<<endl;
        }
    }
}
