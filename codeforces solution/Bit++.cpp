#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int n,x=0;
    string s;
    cin>>n;
    while(n--)
    {
        cin>>s;
        if(s== "X++" || s== "++X")
            x=x+1;
        else if(s== "X--" || s== "--X")
        x=x-1;
    }
    cout<<x<<endl;
}
