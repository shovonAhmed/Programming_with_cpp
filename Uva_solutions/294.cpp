#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    long long int t,l,u,i,j,max,cnt,x,temp;
    cin>>t;
    while(t--)
    {
        max=0;
        cin>>l>>u;
        for(i=l; i<=u; i++)
        {
            cnt=x=0;
            for(j=1;j<=sqrt(i);j++)
            {
                if(i%j==0)
                {
                    cnt++;
                }
            }
            x=sqrt(i);
            if(x==sqrt(i))
                cnt=2*cnt-1;
            else
                cnt=2*cnt;

            if(cnt>max)
            {
                temp=i;
                max=cnt;
            }
        }
        cout<< "Between "<<l<<" and "<<u<<", "<<temp<<
        " has a maximum of "<<max<<" divisors."<<endl;

    }
}
