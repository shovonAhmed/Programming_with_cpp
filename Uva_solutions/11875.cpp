#include<iostream>
using namespace std;
int main()
{
    int age[11],t,n,captain,j=1;
    cin>>t;

    while(t--)
    {
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>age[i];
        }
        captain=n/2;
        cout<< "Case "<<j<< ": "<<age[captain]<<endl;
        j++;
    }
}
