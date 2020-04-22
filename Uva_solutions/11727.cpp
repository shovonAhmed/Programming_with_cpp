#include <iostream>

using namespace std;

int main ()
{
int i, j,k,n,l=1,survive;
    cin>>n;
    do
    {
        cin>>i>>j>>k;

        if(i>j && i<k ||i<j && i>k)
        {
        survive=i;
        }

        else if(j>i && j<k || j<i && j>k)
        {
        survive=j;
        }

        else
        survive=k;

        cout<< "Case "<<l<< ": " <<survive<<endl;
        l++;
    }
    while(l<=n);

    return 0;
}
