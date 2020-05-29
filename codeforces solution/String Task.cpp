#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int main()
{
    char s[101],str[202];
    int k;
    cin>>s;
    int len=strlen(s);
    k=0;
    for(int i=0;i<len;i++)
    {
        if(s[i]!='a' &&s[i]!='e' &&s[i]!='i' &&s[i]!='o'
           &&s[i]!='u' &&s[i]!='y' &&s[i]!='A' &&s[i]!='E'
           &&s[i]!='I' &&s[i]!='O' &&s[i]!='U' &&s[i]!='Y')
        {
            str[k]=s[i];
            k++;
        }
    }
    strlwr(str);
    for(int i=0;i<k;i++)
        cout<< "."<<str[i];
    cout<<endl;
}
