#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    string s;
    int l=1;
    cin>>s;

    while(s!= "*")
    {
        if(s== "Hajj")
        {
            cout<<"Case "<<l<< ": Hajj-e-Akbar"<<endl;
        }
        else
            cout<<"Case "<<l<< ": Hajj-e-Asghar"<<endl;

        cin>>s;
        l++;
    }

}
