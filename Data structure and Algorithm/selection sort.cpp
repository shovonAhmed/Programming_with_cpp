#include<iostream>
using namespace std;

int main()
{
    int a[1000],n,i,j,index_min,temp;
    cout<< "How many numbers you want to enter?"<<endl;
    cin>>n;
    cout<< "Enter "<<n<< "number"<<endl;

    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }

    for(i=0; i<n-1; i++)
    {
        index_min=i;

        for(j=i+1; j<n; j++)
        {
            if(a[index_min]>a[j])
            {
                index_min=j;

            }
        }


        if(a[index_min]!=a[i])
        {
            temp=a[i];
            a[i]=a[index_min];
            a[index_min]=temp;
        }


    }

    cout<< "sorted list:"<<endl;
    for(i=0; i<n; i++)
    {
        cout<<a[i]<< " ";
    }
    return 0;
}
