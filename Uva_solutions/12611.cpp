#include<iostream>
using namespace std;
int main()
{
    int t,r,i=1,length,width,up,down,left,right;
    cin>>t;
    while(t--)
    {
        cin>>r;
        length=r*5;
        width=r*3;
        left=(length*45)/100;
        right=(length*55)/100;
        up=width/2;
        down=width/2;

        cout<< "Case "<<i<< ":"<<endl;
        cout<< "-"<<left<< " "<<up<<endl;
        cout<<right<< " "<<up<<endl;
        cout<<right<< " "<< "-"<<down<<endl;
        cout<< "-"<<left<< " "<< "-"<<down<<endl;
        i++;
    }
}
