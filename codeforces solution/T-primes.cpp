#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
bool is_prime(int n)
{

    if (n == 1)
    {
        return 0;
    }

    int i = 2;
    while (i*i <= n)
    {
        if (n % i == 0)
        {
            return 0;
        }
        i += 1;
    }
    return 1;
}

int main()
{
    long long int n,i,j,x,sq;
    cin>>x;
    vector<unsigned long long int>v(x);
    for(i=0; i<x; i++)
    {
        cin>>v[i];
    }

    for(i=0; i<v.size(); i++)
    {
        sq=sqrt(v[i]);
        if(sq*sq==v[i])
        {
            if(is_prime(sq)==1)
                cout<< "YES"<<endl;
            else
                cout<< "NO"<<endl;
        }

        else
        {
            cout<< "NO"<<endl;
        }
    }
}
