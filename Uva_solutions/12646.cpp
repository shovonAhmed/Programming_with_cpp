#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    while(cin>>a>>b>>c)
    {
        if(a==b && b==c && c==a)
            cout<< "*"<<endl;
        else if(a==b)
            cout<< "C"<<endl;
        else if(a==c)
            cout<< "B"<<endl;
        else if(b==c)
            cout<< "A"<<endl;
    }
}
