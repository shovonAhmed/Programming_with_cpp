#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int i,j,sum,x,y,a[5][5];
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            cin>>a[i][j];
            if(a[i][j]==1)
            {
                x=i;
                y=j;
            }
        }
    }
    sum=abs(x-2)+abs(y-2);
    cout<<sum<<endl;

}
