#include<iostream>
using namespace std;
int main()
{
    int x,y,diff,i,tempy,tempx;
    while(cin>>x>>y)
    {
        tempy=y;
        tempx=x;
        for(i=1; ; i++)
        {
            tempx=x*i;
            tempy=y*i;
            if(tempy-tempx>=y)
                break;
        }
        cout<<i<<endl;
    }
}
