#include<iostream>
#include<fstream>
#include<string>

using namespace std;
int main()
{
    string write,write1;
    ofstream presentation,text;

    cout<< "Enter your student information: "<<endl;
    presentation.open("student.ppt",ios::out|ios::app);
    getline(cin,write);
    presentation<< write<<endl;
    presentation.close();

    cout<< "Enter your address : "<<endl;
    text.open("address.txt",ios::out|ios::app);
    getline(cin,write1);
    text<< write1<<endl;
    text.close();

    cout<< "data is stored in both filefh.Thank you.";

}
