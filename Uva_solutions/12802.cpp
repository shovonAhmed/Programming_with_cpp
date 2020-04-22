#include<iostream>
using namespace std;
int main()
{
    int n,cnt,rev,temp;
    while(cin>>n)
    {
        cnt=1;
        temp=n;
        rev=0;
        while(temp)
        {
            rev=rev*10+temp%10;
            temp=temp/10;
        }
        if(n==rev)
        {
            for(int i=2; i<n; i++)
            {
                if(n%i==0)
                {
                    cnt=0;
                    break;
                }
            }
            if(cnt==1)
            {
                cout<<n*2<<endl;
                goto end;
            }

        }
        cout<<n*2<<endl;
    }
    end:
    return 0;
}
