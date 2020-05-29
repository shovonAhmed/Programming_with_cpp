#include<iostream>
using namespace std;
int main()
{
    int n,m,i,j,x,cnt,count;
    while(cin>>n>>m)
    {
        count=0;
        for(i=1;i<=n;i++)
        {
            cnt=0;
            for(j=1;j<=m;j++)
            {
                cin>>x;
                if(x>0)
                    cnt++;
            }
            if(cnt==m)
                count++;
        }
        cout<<count<<endl;
    }
}
