#include<iostream>

using namespace std;


int main()

{

    int n,l=1;
    while((cin>>n) && n!=0)
    {
        int M=0,N=0;
        cin>>M>>N;

            for(int i=1; i<=n; i++)
            {
                int X=0,Y=0;

                cin>>X>>Y;

                if(X>M && Y>N)
                {
                    cout<< "NE"<<endl;
                }


                else if(X<M && Y>N)
                {
                    cout<< "NO"<<endl;
                }


                else if(X>M && Y<N)
                {
                    cout<< "SE"<<endl;
                }


                else if(X<M && Y<N)
                {
                    cout<< "SO"<<endl;
                }

                else
                {
                    cout<< "divisa"<<endl;
                }

            }

    }
    return 0;
}
