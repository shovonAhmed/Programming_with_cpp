#include<iostream>
using namespace std;
int main()
{
    int n,array[11];
    cin>>n;
    cout<< "Lumberjacks:"<<endl;

    while(n--)
    {
        int count1=1,count2=1;
        cin>>array[0];
        for(int i=1;i<10;i++)
        {
            cin>>array[i];
            if(array[i]>array[i-1])
            {
                count1++;
            }
            else if(array[i]<array[i-1])
            {
                count2++;
            }
        }

        if((count1==10 && count2==1) || (count1==1 && count2==10))
        {
            cout<< "Ordered"<<endl;
        }
        else
            cout<< "Unordered"<<endl;
    }
    return 0;
}
