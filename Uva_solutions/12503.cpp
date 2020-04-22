#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    int t,n,same;
    string s[101];
    cin>>t;
    while(t--)
    {
        string s1,s2;
        int count=0;
        cin>>n;
        for(int i=1 ; i<=n ; i++)
        {
            cin>>s1;

            if(s1== "LEFT")
            {
                s[i]=s1;
                count--;
            }

            else if(s1== "RIGHT")
            {
                s[i]=s1;
                count++;
            }

            else
            {
                cin>>s2>>same;
                s[i]=s[same];
                if(s[same]=="LEFT")
                    count--;
                else if(s[same]=="RIGHT")
                    count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
