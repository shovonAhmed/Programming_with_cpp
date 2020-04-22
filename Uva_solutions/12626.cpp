#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int main()
{
    int n,m,a,r,g,i,t,count;
    char c[601];
    cin>>n;
    while(n--)
    {
        m=a=r=g=i=t=count=0;

        cin>>c;
        int len=strlen(c);
        for(int j=0; j<len; j++)
        {
            if(c[j]=='M')
            {
                m++;
            }
            else if(c[j]=='A')
            {
                a++;
            }
            else if(c[j]=='R')
            {
                r++;
            }
            else if(c[j]=='G')
            {
                g++;
            }
            else if(c[j]=='I')
            {
                i++;
            }
            else if(c[j]=='T')
            {
                t++;
            }
        }
        while(m>=1 && a>=3 && r>=2 && i>=1 && t>=1 && g>=1)
        {
            count++;
            m-=1;
            a-=3;
            r-=2;
            i-=1;
            t-=1;
            g-=1;
        }
        cout<<count<<endl;

    }
}
