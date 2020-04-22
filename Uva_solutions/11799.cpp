#include<iostream>
using namespace std;
int main()
{
    int t,n,array[10000],max_speed,case_no=1;
    cin>>t;
    while(t--)
    {
        cin>>n;

        cin>>array[0];
        max_speed=array[0];

        for(int i=1; i<n; i++)
        {
            cin>>array[i];
            if(array[i]>max_speed)
            {
                max_speed=array[i];
            }
        }
        cout<< "Case "<<case_no<< ": "<<max_speed<<endl;
        case_no++;
    }
    return 0;
}
