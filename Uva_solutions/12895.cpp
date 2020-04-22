#include<iostream>
using namespace std;
int main()
{
    long int t,n,cnt,rem,temp,temp1,x,total,y;
    cin>>t;
    while(t--)
    {
        cnt=total=0;
        cin>>n;
        temp=n;
        temp1=n;
        while(temp)
        {
            temp=temp/10;
            cnt++;
        }
        while(temp1)
        {
            y=1;
            rem=temp1%10;
            for(int i=1; i<=cnt; i++)
            {
                x=y*rem;
                y=x;
            }
            total=total+y;
            temp1=temp1/10;
        }
        if(total==n)
            cout<< "Armstrong"<<endl;
        else
            cout<< "Not Armstrong"<<endl;
    }
}
