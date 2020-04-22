#include<iostream>
using namespace std;
int main()
{
    long int t,n,rem,temp,sum,i=1;
    cin>>t;
    while(t--)
    {
        cin>>n;
        temp=n;
        while(1)
        {
            sum=0;
            while(temp)
            {
                rem=temp%10;
                sum=sum+rem*rem;
                temp=temp/10;
            }
            if(sum<=9)
                break;
            temp=sum;

        }
        if(sum==1 || sum==7)
        {
            cout<< "Case #"<<i<< ": "<<n<<" is a Happy number."<<endl;
        }

        else
        {
            cout<< "Case #"<<i<< ": "<<n<<" is an Unhappy number."<<endl;
        }
        i++;
    }
}
