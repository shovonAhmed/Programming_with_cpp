#include<iostream>
using namespace std;
int main()
{
    int p,h,o;
    while(cin>>p>>h>>o)
    {
        if((o-p)<h)
            cout<< "Hunters win!"<<endl;
        else
            cout<< "Props win!"<<endl;
    }
}
