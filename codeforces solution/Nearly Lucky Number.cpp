#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long int n,i,temp,cnt=0;
    cin>>n;

    while(n)
    {
        temp=n%10;
        if(temp==4 || temp==7)
            cnt++;
        n=n/10;
    }
    if(cnt==4 || cnt==7)
    {
        cout<< "YES"<<endl;
    }
    else
        cout<< "NO"<<endl;
}
