#include<iostream>
#include<cstring>
#include<cstdio>

using namespace std;

int main()
{
    int i;
    char c[11];
    cin>>i;

    while(i--)
    {
        cin>> c;

        if(strlen(c)>3)
            cout<< "3"<<endl;

        else
        {
            if(c[0]== 'o' && c[1]== 'n')
            cout<< "1"<<endl;

            else if(c[0]== 'o' && c[2]== 'e')
            cout<< "1"<<endl;

            else if(c[1]== 'n' && c[2]== 'e')
            cout<< "1"<<endl;

            else if(c[0]== 'o' && c[1]== 'n' && c[2]== 'e')
            cout<< "1"<<endl;

            else if(c[0]== 't' && c[1]== 'w' && c[2]== 'o')
            cout<< "2"<<endl;

            else if(c[0]== 't' && c[1]== 'w')
            cout<< "2"<<endl;

            else if(c[0]== 't' && c[2]== 'o')
            cout<< "2"<<endl;

            else if(c[1]== 'w' && c[2]== 'o')
            cout<< "2"<<endl;
        }



    }

}
