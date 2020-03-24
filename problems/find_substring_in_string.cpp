#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    string name;
    char ch;
    cout<< "Enter name: ";
    getline(cin,name);
    cout<< "Enter a character: ";
    cin>>ch;
    int store= name.find(ch);
    if(store==-1)
        cout<< "character doesn't found"<<endl;
    else
        cout<< "character found";
}
