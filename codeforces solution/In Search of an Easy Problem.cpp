#include<iostream>
using namespace std;
int main()
{
    int n,Cnt,i;
    cin>>n;
    int a[n];
    Cnt=0;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i]==1)
        {
            Cnt=1;
        }
    }
    if(Cnt==1)
        cout<< "HARD"<<endl;
    else
        cout<< "easy"<<endl;
}
