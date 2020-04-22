#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    long int n,i;
    while((cin>>n) && (n!=0))
    {
        int a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        for(int l=0;l<n;l++)
        {
            cout<< a[l];
            if(l<n-1)
                cout<< " ";
        }
        cout<<endl;

    }
}
