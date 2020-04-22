#include<iostream>
using namespace std;
int main()
{
    int n,k,cigarette,rem_cigarette,init;
    while(cin>>n>>k)
    {
        int init,total_cigarette=0;
        init=n;
        while(n>=k)
        {

            cigarette=n/k;
            rem_cigarette=n%k;
            total_cigarette=total_cigarette + cigarette;
            n=cigarette+rem_cigarette;
        }
        cout<<total_cigarette+init<<endl;
    }
}
