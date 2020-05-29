#include<iostream>
using namespace std;

int main()
{
    int a[1000],i,n,find;
    cout<< "How many number you want to enter?"<<endl;
    cin>>n;
    cout<< "Enter "<<n<<" number: "<<endl;

    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    cout<< "Which number you want to find?"<<endl;
    cin>>find;

    for(i=0;i<n;i++)
    {
        if(a[i]==find)
        {
            cout<<find<< " is in "<<i+1<< " no position"<<endl;
            break;
        }
    }

    if(i==n)
        cout<<find<< "is not in the list.";

}
