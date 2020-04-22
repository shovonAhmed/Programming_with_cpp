#include<iostream>
using namespace std;
int main()
{
    long long int a,l,terms,i=1;
    while(cin>>a>>l)
    {
        if(a<0 && l<0)
            break;

        long long int A,limit,cnt=1;
        A=a;
        limit=l;

        while(a!=1)
        {
            if(a%2==0)
            {
                a=a/2;
                cnt++;
            }
            else
            {
                a=3*a+1;
                cnt++;
            }
            if(a>l)
            {
                cnt--;
                break;
            }

        }
        cout<<"Case "<<i<<": A = "<<A<<", limit = "<<limit<<", number of terms = "<<cnt<<endl;
        i++;

    }
}
