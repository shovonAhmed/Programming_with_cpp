#include<iostream>
using namespace std;
int main()
{
    int n,i,count,mod,array[1000];
    while((cin>>n) && n!=0)
    {
        count=0;
        mod=0;
        for(i=0; ; i++)
        {
            mod=n%2;
            if(mod==1)
            {
                count++;
            }
            array[i]=mod;

            if(n==0)
            {
                break;
            }
            n=n/2;
        }
        cout<< "The parity of ";
        for(int j=i-1;j>=0;j--)
        {
            cout<<array[j];
        }
        cout<< " is "<<count<< " (mod 2)."<<endl;

    }
}
