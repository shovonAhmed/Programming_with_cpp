#include<iostream>
using namespace std;
int main()
{
    int x1,x2,x3,x4,x5,y1,y2,y3,y4,y5;
    while(cin>>x1>>x2>>x3>>x4>>x5>>y1>>y2>>y3>>y4>>y5)
    {
        if(x1==y1 || x2==y2 || x3==y3 || x4==y4 || x5==y5)
            cout<< "N"<<endl;
        else
            cout<< "Y"<<endl;
    }
}
