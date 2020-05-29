#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char s[101];
    int i,j,k,len,cnt,num=1;
    cin>>s;
    len=strlen(s);
    for(i=0;i<len-1;i++)
    {
        for(j=i+1;j<len;j++)
        {
            if(s[i]!=s[j])
                cnt=1;
            else
            {
                cnt=0;
                break;
            }

        }
        if(cnt==1)
            num++;
    }
    if(num%2==0)
    cout<<"CHAT WITH HER!"<<endl;
    else
        cout<<"IGNORE HIM!"<<endl;
}
