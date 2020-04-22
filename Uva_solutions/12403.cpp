#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    int i,k,sum=0;
    char ch[100];
    cin>>i;

    while(i--)
    {
        cin>>ch;
        int value=strcmp(ch, "donate");
        if(value==0)
        {
            cin>>k;
            sum=sum+k;
        }
        else
            cout<<sum<<endl;
    }

}
