#include<iostream>
#include<cmath>

using namespace std;
int main()
{
    long int a,b,difference;
    while(cin>>a>>b)
    {
        difference= abs(a-b);
        cout<<difference<<endl;
    }
    return 0;
}
