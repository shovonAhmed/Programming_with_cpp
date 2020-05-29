#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    int t,sum,cnt;
    char s[81];
    cin>>t;
    while(t--)
    {
        cin>>s;
        sum=cnt=0;

        int len=strlen(s);
        for(int i=0;i<len;i++)
        {
            if(s[i]=='X')
                cnt=0;
            else
                cnt=cnt+1;
            sum=sum+cnt;
        }
        cout<<sum<<endl;
    }
}
