#include <iostream>
using namespace std;
int main()
{

    long long int t,n,c,sum,r,temp;
    cin>>t;
    while (t--)
    {
        cin>>n;
        temp=n;
        c=0;
        while (1)
        {
            sum=0;
            while (temp)
            {
                r=temp%10;
                sum=sum*10+r;
                temp=temp/10;
            }
            if (n==sum)
                break;
            else
            {
                temp=sum+n;
                n=sum+n;
                c++;
            }
        }
        cout<<c<< " "<<n<<endl;
    }
    return 0;
}
