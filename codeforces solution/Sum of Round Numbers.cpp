#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k,t,n,temp,rem,x,rem1,temp1,i,cnt;

    cin>>t;
    while(t--)
    {
        cin>>n;
        temp=n;
        cnt=0;
        while(temp)
        {
            rem=temp%10;
            temp=temp/10;
            cnt++;
        }
        int b[cnt+5]={0};
        k=0;

        for(i=0;i<cnt;i++)
        {
            rem1=n%10;
            x=rem1*(pow(10,i)+0.0000000000001);

            if(x!=0)
            {
                b[k]=x;
                k++;
            }
            n=n/10;
        }
        cout<<k<<endl;

        for(i=0;i<k;i++)
            cout<<b[i]<< " ";
        cout<<endl;
    }
}
