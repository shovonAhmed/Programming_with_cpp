#include<iostream>
using namespace std;
int main()
{
    int n,x,y,z,cnt=0;
    cin>>n;
    while(n--)
    {
        cin>>x>>y>>z;
        if((x==1 && y==1) || (x==1 && z==1) ||
            (y==1 && z==1) || (x==1 && y==1 && z==1))
            cnt++;
    }
    cout<<cnt<<endl;
}
