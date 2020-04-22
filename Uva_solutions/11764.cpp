#include<iostream>
using namespace std;
int main()
{
    int t,n,array[50],count1,count2,case_no=1;
    cin>>t;
    while(t--)
    {
        int high_jump=0,low_jump=0;
        cin>>n;
        cin>>array[0];
        for(int i=1;i<n;i++)
        {
            cin>>array[i];
            if(array[i-1]<array[i])
            {
                high_jump++;
            }
            else if(array[i-1]>array[i])
                low_jump++;
        }
        cout<< "Case "<<case_no<< ": "<<high_jump<< " "<<low_jump<<endl;
        case_no++;
    }
}
