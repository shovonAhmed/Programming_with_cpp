#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    int i,l,w,h,k=1;
    cin>>i;

    do
    {
        cin>>l>>w>>h;

        if(l<=20 && w<=20 && h<=20)
        {
            cout<< "Case "<<k<< ": good"<<endl;
        }

        else
            cout<<"Case "<<k<< ": bad"<<endl;
        k++;

    }
    while(k<=i);
}
