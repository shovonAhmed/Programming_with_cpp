#include<iostream>
#include<vector>
using namespace std;
bool isprime(int num)
{

    for(int i=2; i*i<=num; i++)
    {
        if(num%i==0)
            return false;
    }
    return true;
}


int main()
{
    int n,i,j,c,x,cnt,k;
    vector<int>prime;

    for(int i=1; i<=1000; i++)
    {
        if(isprime(i))
            prime.push_back(i);
    }


    while(cin>>n>>c)
    {

        cout<<n<< " "<<c<< ":";
        k = 0;
        for(i=0; i<prime.size(); i++)
        {
            if(prime[i]<=n)
            {
                k++;
            }
            else
                break;


        }
        cnt=0;
        if(k%2==0)
        {
            if(2*c>k)
            {
                for(i=0; i<k; i++)
                    cout<< " "<<prime[i];
                cout<<endl;
            }
            else
            {
                for(i=(k/2)-c;; i++)
                {
                    cout<< " "<<prime[i];
                    cnt++;
                    if(cnt==2*c)
                        break;
                }
                cout<<endl;
            }


        }
        else
        {
            if((2*c)-1>k)
            {
                for(i=0; i<k; i++)
                    cout<< " "<<prime[i];
                cout<<endl;
            }
            else
            {
                for(i=(k/2)-(c-1);; i++)
                {
                    cout<< " "<<prime[i];
                    cnt++;
                    if(cnt==2*c-1)
                        break;
                }
                cout<<endl;
            }

        }
        cout<<endl;
    }

}
