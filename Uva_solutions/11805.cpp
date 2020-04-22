#include<iostream>
using namespace std;
int main()
{
    int n,k,p,t,i=1;
    cin>>t;
    while(t--)
    {
        cin>>n>>k>>p;
        if((k+p)>n)
        {
            if(((k+p)%n)==0)
                cout<< "Case "<<i<< ": "<<n<<endl;
            else
            cout<< "Case "<<i<< ": "<<((k+p)%n)<<endl;
        }
        else
        {
            cout<< "Case "<<i<< ": "<<(k+p)<<endl;
        }
        i++;
    }
}
