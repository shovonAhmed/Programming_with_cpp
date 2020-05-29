#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int i,sum,cnt,temp,rem;
    char s[1001];
    while(cin>>s)
    {
        if(strcmp(s,"0")==0)
            break;
        cnt=0;
        int len=strlen(s);
        sum=0;
        for(i=0; i<len; i++)
        {
            sum=sum+s[i]-'0';
        }
        while(1)
        {
            cnt++;

            if(sum==1 || sum==2 || sum==3 || sum==4 || sum==5
                    || sum==6 || sum==7 || sum==8)
            {
                cout<<s<< " is not a multiple of 9."<<endl;
                break;
            }

            else if(sum==9)
            {
                cout<<s<< " is a multiple of 9 and has 9-degree "<<cnt<< "."<<endl;
                break;
            }

            else
            {
                temp=0;
                temp=sum;
                sum=0;
                while(temp)
                {
                    rem=temp%10;
                    sum=sum+rem;
                    temp=temp/10;
                }
            }
        }


    }
}
