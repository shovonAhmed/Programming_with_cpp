#include<iostream>
using namespace std;
int main()
{
    long long int s,d,i,sum,member;
    while(cin>>s>>d)
    {
        sum=0;
        for(i=0; ;i++)
        {
            member=s+i;
            sum=sum+member;
            if(sum>=d)
            {
                break;
            }
        }
        cout<<member<<endl;
    }
}
