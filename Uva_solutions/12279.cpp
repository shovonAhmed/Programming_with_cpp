#include <iostream>

using namespace std;

int main()
{
    int N[1001],n,z=1;

    while ((cin>>n) && n!= 0)
    {


        int positive=0,zero=0;

        for(int i=1; i<=n; i++)
        {
            cin>>N[i];

            if(N[i]>0)
            {
                positive++;
            }

            else
                zero++;

        }

        cout<< "Case "<<z<< ": "<<positive-zero<<endl;
        z++;
    }

}
