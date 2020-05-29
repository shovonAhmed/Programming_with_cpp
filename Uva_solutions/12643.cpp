#include<iostream>
using namespace std;
int main()
{
    int n,i,j,k,cnt;
    while(cin>>n>>i>>j)
    {
        for(k=1;k<=n;k++)
        {
            i=(i+1)/2;
            j=(j+1)/2;
            cnt=k;
            if(i==j)
                break;
        }
        cout<<cnt<<endl;
    }
}
