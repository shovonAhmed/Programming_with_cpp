#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char s[101];
    int t;
    cin>>t;
    while(t--)
    {
        cin>>s;
        int len=strlen(s);
        if(len>10)
        cout<<s[0]<<len-2<<s[len-1]<<endl;
        else
            cout<<s<<endl;
    }
}
