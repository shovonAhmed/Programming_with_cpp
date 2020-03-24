#include<iostream>
#include<stdlib.h>
using namespace std;

    int roll;
    string name;
    float gpa;

void view()
{
    cout<< "Name: "<<name<<endl;
    cout<< "Roll: "<<roll<<endl;
    cout<< "Gpa: "<<gpa<<endl;
}

void search()
{
    string findName;
    cout<< "Enter name: "<<endl;
    cin>>findName;
    if(findName.compare(name)==0)
    {
        cout<< "Name is available"<<endl;
    }
    else
    {
        cout<< "Name is not available"<<endl;
    }
}
int main()
{
    int choose;
    char ch;

    cout<< "Enter your name: "<<endl;
    getline(cin,name);
    cout<< "Enter your roll: "<<endl;
    cin>>roll;
    cout<< "Enter your gpa: "<<endl;
    cin>>gpa;
    cout<<endl;

    do
    {
        cout<< "Student record system:"<<endl;
        cout<< "Press 1 to view student record"<<endl;
        cout<< "Press 2 to find name"<<endl;
        cout<< "Press 3 to exit "<<endl;
        cout<<endl;
        cout<< "Choose your option----"<<endl;
        cin>>choose;

        switch(choose)
        {
        case 1:
            view();
            break;
        case 2:
            search();
            break;
        case 3:
            exit(0);
            break;
        default:
            cout<< "Invalid";

        }
        cout<<endl;
        cout<< "If you want to continue press Y"<<endl;
        cin>>ch;
    }

    while(ch=='Y');
}

