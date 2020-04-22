#include<iostream>
using namespace std;
int main()
{
    int a,b,c,a_square,b_square,c_square;
    while(cin>>a>>b>>c)
    {
        if(a==0 && b==0 && c==0)
        {
            break;
        }

        a_square=a*a;
        b_square=b*b;
        c_square=c*c;

        if(a_square + b_square==c_square || a_square + c_square==b_square || b_square + c_square==a_square)
        {
            cout<< "right"<<endl;
        }
        else
            cout<< "wrong"<<endl;
    }
}
