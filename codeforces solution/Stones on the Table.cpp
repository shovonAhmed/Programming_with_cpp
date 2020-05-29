#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int t,i,n,cnt=0;
    char s[51];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>s[i];
    }
    for(i=1;i<n;i++)
    {
        if(s[i]==s[i-1])
            cnt++;
    }
    cout<<cnt<<endl;
}
