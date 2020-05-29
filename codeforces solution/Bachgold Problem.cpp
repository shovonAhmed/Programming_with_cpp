#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n,x,i;
    cin>>n;
    x=n/2;
    vector<int>v(x,2);
    if(n%2==1)
    {
        v[0]=3;
        cout<<x<<endl;
        for(i=0;i<x;i++)
            cout<<v[i]<< " ";
    }
    else
    {
        cout<<x<<endl;
        for(i=0;i<x;i++)
            cout<<v[i]<< " ";
    }

    cout<<endl;

}
