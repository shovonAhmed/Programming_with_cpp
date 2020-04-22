#include<iostream>
using namespace std;
int main()
{
    int n,j=1;
    while(cin>>n)
    {
        if(n<=0)
        {
            break;
        }

        int required=1,cnt=1;
        for(int i=1; i<=n; i++)
        {
            if(n==1)
            {
                cnt=0;
                break;
            }
            required=required*2;

            if(required>=n)
            {
                break;
            }
            cnt++;
        }
        cout<< "Case "<<j<< ": "<<cnt<<endl;
        j++;

    }
}
