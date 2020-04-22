#include<iostream>

using namespace std;

int main()
{
    long int n;
    int sum;
    cin>>n;
    while(n!=0)
    {
        sum=0;
        while(1)
        {
            while(n!=0)
            {
                sum=sum+(n%10);
                n=n/10;
            }
            if(sum/10==0)
                break;
            else
            {
                n=sum;
                sum=0;
            }
        }
        cout<<sum<<endl;
        cin>>n;

    }

    return 0;
}

