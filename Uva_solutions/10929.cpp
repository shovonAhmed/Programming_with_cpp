#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while(cin>>s)
    {
        int sum=0;
        if(s[0]=='0' && s.size()==1)
            return 0;
        int l=s.size();
        for(int i=0;i<l;i+=2)
              sum+=s[i]-'0';
        for(int i=1;i<l;i+=2)
            sum-=s[i]-'0';
        if(sum%11==0)
            cout<<s<<" is a multiple of 11."<<endl;
        else
            cout<<s<<" is not a multiple of 11."<<endl;
    }
    return 0;
}
