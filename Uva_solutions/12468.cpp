#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a,b;
    while((cin>>a>>b) && (a!=-1 && b!=-1))
    {
        int result=0;
        result= abs(a-b);
        if(result>50)
        {
            if(a>b)
            {
                result=(100-a)+b;
            }
            else
            {
                result=(100-b)+a;
            }
        }

        cout<<result<<endl;
    }
    return 0;
}
