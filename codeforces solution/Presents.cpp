#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n,i,x;
    cin>>n;
    vector<int>v(n);
    for(i=0;i<n;i++)
    {
        cin>>x;
        v[x-1]=i+1;
    }
    for(i=0;i<n;i++)
        cout<<v[i]<< " ";
    cout<<endl;
}
