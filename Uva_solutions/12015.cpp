#include<iostream>
using namespace std;
int main()
{
    int t,maxi,case_no=1,v[10];
    char s[10][100];
    cin>>t;

    while(t--)
    {
        maxi=0;
        for(int i=0;i<10;i++)
        {
            cin>>s[i];
            cin>>v[i];
            if(v[i]>maxi)
            {
                maxi=v[i];
            }

        }
        cout<< "Case #"<<case_no<< ":"<<endl;
        for(int i=0;i<10;i++)
        {
            if(maxi==v[i])
                cout<<s[i]<<endl;
        }
        case_no++;
    }
    return 0;
}
