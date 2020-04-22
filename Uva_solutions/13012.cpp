#include<iostream>
using namespace std;
int main()
{
    int t,arr[6],cnt;
    while(cin>>t)
    {
        cnt=0;
        for(int i=0;i<5;i++)
        {
            cin>>arr[i];
            if(arr[i]==t)
                cnt++;
        }
        cout<<cnt<<endl;

    }
}
