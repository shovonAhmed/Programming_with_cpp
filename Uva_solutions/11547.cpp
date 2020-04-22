#include<iostream>
using namespace std;

int main()
{
    int t,n,x,y;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>n;
        n= ((567*n)/9);
        x=(n+7492)*235;
        y=(x/47)-498;
        y=y/10;
        y=y%10;
        if(y<0)
            y=y/(-1);
        cout<<y<<endl;
    }


    return 0;
}
