#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    int i,j,n;
    char c[31];
    while(cin>>c)
    {
        int len=strlen(c);

        for(j=0; j<len; j++)
        {
            if(c[j]=='A' || c[j]=='B' || c[j]=='C')
                cout<< "2";
            else if(c[j]=='D' || c[j]=='E' || c[j]=='F')
                cout<< "3";
            else if(c[j]=='G' || c[j]=='H' || c[j]=='I')
                cout<< "4";
            else if(c[j]=='J' || c[j]=='K' || c[j]=='L')
                cout<< "5";
            else if(c[j]=='M' || c[j]=='N' || c[j]=='O')
                cout<< "6";
            else if(c[j]=='P' || c[j]=='Q' || c[j]=='R'|| c[j]=='S')
                cout<< "7";
            else if(c[j]=='T' || c[j]=='U' || c[j]=='V')
                cout<< "8";
            else if(c[j]=='W' || c[j]=='X' || c[j]=='Y' || c[j]=='Z')
                cout<< "9";
            else
                cout<<c[j];
        }
        cout<<endl;
    }

}
