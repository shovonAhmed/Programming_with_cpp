#include<iostream>
using namespace std;
int main()
{
    int t,n,b,h,w,price,bed;

    while(cin>>n>>b>>h>>w)
    {
        int cost=500001;

        while(h--)
        {
            cin>>price;

            for(int i=1; i<=w; i++)
            {
                cin>>bed;
                int total_cost=0;
                if(bed>=n)
                {
                    total_cost=(price*n);
                    if(cost>total_cost)
                    {
                        cost=total_cost;
                    }
                }

            }

        }
        if(cost>b)
            cout<< "stay home"<<endl;
        else
            cout<< cost<<endl;

    }
    return 0;
}
