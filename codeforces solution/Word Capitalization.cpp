#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char s[1001];
    cin>>s;
    if(((s[0]-'0')>=49) && ((s[0]-'0')<=74))
        s[0]=(s[0])-32;
    cout<<s<<endl;
}
