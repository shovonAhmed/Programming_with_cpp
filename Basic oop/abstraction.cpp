/*There should be one pure virtual function in abstract class.
  Only pointer can be used instead of object.
  It can be possible to declare non virtual function in a abstract class.
*/

#include<iostream>
#include<conio.h>
using namespace std;

class User
{
public:
    virtual void message()=0;
};

class Rahim:public User
{
    void message()
    {
        cout<< "i am Rahim"<<endl;
    }
};

class Karim:public User
{
    void message()
    {
        cout<< "i am Karim"<<endl;
    }
};

int main()
{
    User *u;
    Rahim r;
    Karim k;

    u=&r;
    u->message();

    u=&k;
    u->message();

    getch();
}

