#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,l,count,i,j,k,arr[51];
    cin>>n;
    while(n--)
    {
        count=0;
        cin>>l;
        for(i=0;i<l;i++)
        {
            cin>>arr[i];
        }

        for(j=0;j<l;j++)
        {
            for(k=0;k<l-1;k++)
            {
                if(arr[k]>arr[k+1])
                {
                    swap(arr[k],arr[k+1]);
                    count++;
                }
            }
        }
        cout<< "Optimal train swapping takes "<<count<<" swaps."<<endl;
    }
}
