#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int i,j,cycle_length;
    while ( (cin>>i>>j) )
    {
        int max_cycle_length=0;
        int temp_i=i;
        int temp_j=j;
        if(i>j)
            swap(i,j);
        while(i<=j)
        {
            int n=i;
            cycle_length=1;
            while(n!=1)
            {
                if(n%2==0)
                {
                    n=n/2;
                }
                else
                {
                    n=3*n +1;
                }
                cycle_length++;
            }
            if(max_cycle_length<cycle_length)
            {
                max_cycle_length=cycle_length;
            }
            i++;
        }
        cout<<temp_i<<" "<<temp_j<<" "<<max_cycle_length<<endl;
    }
    return 0;
}

