#include<iostream>
#include<fstream>
#include<string>

using namespace std;
int main()
{
    string line;

    /*you must create a student.txt file
    where you have saved this program */

    ifstream file("student.txt");
    while(getline(file,line))
    {
        cout<<line<<endl;
    }
    file.close();


}
