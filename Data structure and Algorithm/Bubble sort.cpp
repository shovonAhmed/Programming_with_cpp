#include<iostream>
using namespace std;
int main()
{
    int n,i,j,k,temp;
    cout<< "How many number you want to enter?"<<endl;
    cin>>n;
    int a[n];
    cout<< "Enter n number: ";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(j=0;j<n;j++)
    {
        for(k=0;k<n-j-1;k++)
        {
            if(a[k]>a[k+1])
            {
                temp=a[k];
                a[k]=a[k+1];
                a[k+1]=temp;
            }
        }
    }
    cout<< "Bubble sort: "<<endl;
    for(int l=0;l<n;l++)
    cout<<a[l]<< " ";
}
