#include<iostream>
using namespace std;
int main()
{
    int n,l=1,numberOfStore,StoreNo;
    cin>>n;

    do
    {
        int min=100,max=0;
        cin>>numberOfStore;
        for(int i=1;i<=numberOfStore;i++)
        {
            cin>> StoreNo;
            if(StoreNo<min)
            {
                min=StoreNo;
            }

            if(StoreNo>max)
            {
                max=StoreNo;
            }
        }

        cout<<(max-min)*2<<endl;
        l++;
        }

        while(l<=n);

}

