#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[100];
    string word="hello";
    cin>>s;
    int i,j=0,cnt=0;
    int len=strlen(s);
    for(i=0;i<len;i++)
    {
        if(s[i]==word[j])
        {
            j++;
            cnt++;
        }
    }
    if(cnt==5)
        cout<<"YES"<<endl;
    else
        cout<< "NO"<<endl;
}
