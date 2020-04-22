#include<iostream>
using namespace std;
int main()
{
    int t,n,result1,result2,mile,juice,case_no=1;
    cin>>t;

    while(t--)
    {
        int sum1=0,sum2=0,sec=0;
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            cin>>sec;
            result1=(sec/30)+1;
            mile=(10*result1);
            sum1=sum1+mile;

            result2=(sec/60)+1;
            juice=(15*result2);
            sum2=sum2+juice;

        }
        if(sum1<sum2)
        {
            cout<< "Case "<<case_no<< ": Mile "<<sum1<<endl;
        }

        else if(sum1>sum2)
        {
            cout<< "Case "<<case_no<< ": Juice "<<sum2<<endl;
        }

        else
            cout << "Case "<<case_no<< ": Mile Juice "<<sum1<<endl;
        case_no++;
    }
    return 0;
}
