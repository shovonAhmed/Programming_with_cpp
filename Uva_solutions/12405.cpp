#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int t,n,j,cnt,k=1;
    char s[101];
    cin>>t;
    while(t--)
    {

        cin>>n;
        cin>>s;
        cnt=0;

        for(j=0;j<n;)
        {
            if(s[j]=='.')
            {
                cnt++;
                j=j+3;
            }
            else
                j++;

        }
        cout<< "Case "<<k<< ": "<<cnt<<endl;
        k++;
    }
}
