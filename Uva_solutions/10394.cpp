#include<bits/stdc++.h>
#define M 20000005
using namespace std;
bool v[M];
vector<long long int>twin(M);
void sieve()
{
    long long int i,j;
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
    long long int i,n,cnt=1;
        for(i=3;i<M;i++)
        {
            if(v[i]==0 && v[i+2]==0)
            {
                twin[cnt]=i;
                cnt++;
            }
        }
    while(cin>>n)
    {
        cout<<"("<<twin[n]<< ", "<<twin[n]+2<< ")"<<endl;
    }
    return 0;
}
