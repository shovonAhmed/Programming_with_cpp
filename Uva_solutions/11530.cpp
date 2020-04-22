#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    int t,sum,i=1;
    char s[101];
    cin>>t;
    getchar();
    while(t--)
    {
        gets(s);
        int len=strlen(s);
        sum=0;
        for(int j=0; j<len; j++)
        {
            if(s[j]=='a'||s[j]=='d'||s[j]=='g'||s[j]=='j'||s[j]=='m'||s[j]=='p'||s[j]=='t'||s[j]=='w'||s[j]==' ')
                sum=sum+1;
            else if(s[j]=='b'||s[j]=='e'||s[j]=='h'||s[j]=='k'||s[j]=='n'||s[j]=='q'||s[j]=='u'||s[j]=='x')
                sum=sum+2;
            else if(s[j]=='c'||s[j]=='f'||s[j]=='i'||s[j]=='l'||s[j]=='o'||s[j]=='r'||s[j]=='v'||s[j]=='y')
                sum=sum+3;
            else if(s[j]=='s'||s[j]=='z')
                sum=sum+4;

        }
        cout<< "Case #"<<i<< ": "<<sum<<endl;
        i++;
    }
}
