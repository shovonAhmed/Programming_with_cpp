#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char s[101];
    int i,len,cnt=0;
    cin>>s;
    len=strlen(s);
    for(i=1;i<len;i++)
    {
        if(s[i]==s[i-1])
        {
            cnt++;
            if(cnt==6)
            goto jump;
        }
        else
            cnt=0;
    }
    jump:
    if(cnt==6)
        cout<< "YES"<<endl;
    else
        cout<< "NO"<<endl;
}
