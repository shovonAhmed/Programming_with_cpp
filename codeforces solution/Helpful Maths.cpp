#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
    char s[101];
    char temp;
    int i,j;
    cin>>s;
    int len=strlen(s);
    for(j=0; j<len-2; j=j+2)
    {
        for(i=0; i<len-2; i=i+2)
        {
            if((s[i]-'0')>(s[i+2]-'0'))
            {
                temp=s[i];
                s[i]=s[i+2];
                s[i+2]=temp;
            }
        }
    }

    cout<<s<<endl;
}
