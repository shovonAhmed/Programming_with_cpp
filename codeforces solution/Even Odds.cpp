#include<iostream>
#include<vector>
#define mrx long long
using namespace std;
int main()
{
    mrx n,k;
    cin>>n>>k;
    if(n%2==0 && k<=n/2)
    {
        cout<<2*k-1<<endl;
    }
    else if(n%2==0 && k>n/2)
    {
        cout<<2*(k-(n/2))<<endl;
    }

    else if(n%2==1 && k<=(n/2)+1)
    {
        cout<<2*k-1<<endl;
    }
    else if(n%2==1 && k>(n/2)+1)
    {
        cout<<2*(k-((n/2)+1))<<endl;
    }


}
