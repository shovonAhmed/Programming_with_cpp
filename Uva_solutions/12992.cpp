#include<iostream>
using namespace std;
int main()
{
    int t,n,cnt,j=1;
    cin>>t;

    while(t--)
    {
        cnt=1;
        cin>>n;
        for(int i=1;i<n;i++)
        {
            cnt=cnt+2;
        }
        cout<< "Case #"<<j<< ": "<<cnt<<endl;
        j++;
    }
}
