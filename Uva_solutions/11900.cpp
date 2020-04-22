#include<iostream>

using namespace std;
int main()
{
    int t,n,p,q,i,j,k=1;
    cin>>t;
    while(t--)
    {
        int sum=0,count=0;
        cin>>n>>p>>q;
        int arr[n];
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }

        for(j=0;j<p;j++)
        {
            sum=sum+arr[j];
            if(sum>q)
                break;
                count++;
        }
        cout<< "Case "<<k<< ": "<<count<<endl;
        k++;
    }
}
