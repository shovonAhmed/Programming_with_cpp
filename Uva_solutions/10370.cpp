#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int t,n,number[1001];
    cin>>t;
    while(t--)
    {
        double average,above_average,sum=0,count=0;

        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>number[i];
            sum=sum+number[i];
        }
        average=sum/n;
        for(int i=0;i<n;i++)
        {
            if(number[i]>average)
            {
                count++;
            }
        }
        above_average=count/n;
        cout<<fixed<<setprecision(3)<<above_average*100.00<<"%"<<endl;
    }
}
