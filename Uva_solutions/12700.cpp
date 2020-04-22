#include<cstdio>
#include<cstring>
using namespace std;

int main()
{
    int tc,nc=1;
    scanf("%d",&tc);
    while (tc--)
    {
        int n,b,w,t,a;
        char s[15];
        scanf("%d",&n);
        getchar();
        gets(s);
        b=w=t=a=0;
        for (int i=0;i<n;i++)
        {
            if (s[i]=='B') b++;
            else if (s[i]=='W') w++;
            else if (s[i]=='T') t++;
            else if (s[i]=='A') a++;
        }
        printf("Case %d: ",nc++);
        if((b+a==n)&& b!=0)
            printf("BANGLAWASH\n");
        else if((w+a==n) && w!=0)
            printf("WHITEWASH\n");
        else if(a==n)
            printf("ABANDONED\n");
        else if(b>w)
            printf("BANGLADESH %d - %d\n",b,w);
        else if(b<w)
            printf("WWW %d - %d\n",w,b);
        else if(b==w)
            printf("DRAW %d %d\n",b,t);
    }
    return 0;
}
