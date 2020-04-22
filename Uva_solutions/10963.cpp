#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,y1,y2;
    cin>>n;
    while(n--)
    {
        int w=0;
        cin>>w;
        int y1,y2,y[w],i,count=0;
        for(i=0;i<w;i++)
        {
            cin>>y1>>y2;
            y[i]=abs(y1-y2);
            if(y[0]==y[i])
            {
                count++;
            }
        }
        if(count==w)
        {
            cout<< "yes"<<endl;
        }
        else
            cout<< "no"<<endl;

        if(n)
            cout<<endl;
    }

    return 0;
}
