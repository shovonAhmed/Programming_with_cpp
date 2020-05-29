#include<iostream>
#include<cstring>

using namespace std;
int main()
{
    char s1[101],s2[101];
    int x,y,i;
    cin>>s1>>s2;
    strlwr(s1);
    strlwr(s2);
    int len=strlen(s1);
    for(i=0; i<len; i++)
    {
        if(s1[i]!=s2[i])
            break;
    }
    x=s1[i]-'0';
    y=s2[i]-'0';

    if(x<y)
        cout<< "-1"<<endl;
    else if(x>y)
        cout<< "1"<<endl;
    else
        cout<< "0"<<endl;
}
