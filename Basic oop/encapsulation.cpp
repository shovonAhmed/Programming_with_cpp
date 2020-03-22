#include <iostream>
#include<string>
using namespace std;


class student
{
private:
    string name;

public:
    void setName(string x)
    {
        name=x;
    }
    string getName()
    {
        return name;
    }

};
int main()
{
    student ss;
    ss.setName("Shovon");
    cout<<ss.getName();
    return 0;
}
