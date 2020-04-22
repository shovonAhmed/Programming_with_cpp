#include<iostream>
using namespace std;
int main()
{
    int n,e,f,c,rem,total_bottle,sum;
    cin>>n;
    while(n--)
    {
        rem=total_bottle=sum=0;
        cin>>e>>f>>c;
        int total_bottle=e+f;
        while(total_bottle>=c)
        {
            rem=total_bottle%c;
            total_bottle=total_bottle/c;
            sum=sum+total_bottle;
            total_bottle=total_bottle+rem;
        }
        cout<<sum<<endl;
    }
}
