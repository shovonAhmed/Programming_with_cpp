#include<iostream>
using namespace std;

int binary_search(int a[1000],int n,int find)
{

    int left,right,mid;
    left=0;
    right=n-1;

    while(left<=right)
    {
        mid=(left + right)/2;

        if(a[mid]==find)
        {
            return mid;
        }
        if(a[mid]<find)
        {
            left=mid+1;
        }

        else
            right=mid-1;
    }
    return -1;

}

int main()
{
    int b[1000],x,y;

    cout<< "How many number you want to enter?"<<endl;
    cin>>x;
    cout<< "Enter "<<x<< " number"<<endl;

    for(int i=0;i<x;i++)
    {
        cin>>b[i];
    }

    cout<< "which number you want to find?"<<endl;
    cin>>y;

    int result=binary_search(b,x,y);

    if(result==-1)
    {
        cout<< "Element is not present in this array"<<endl;
    }
    else
        cout<< "Element is present at index "<<result<<endl;


        return 0;

}
