#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    int n;
    string s[]= {"Happy","birthday","to", "you", "Happy", "birthday", "to", "you",
                 "Happy", "birthday", "to", "Rujia", "Happy", "birthday", "to", "you"
                };
    string names[101];
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>names[i];
    }
    int loop = 0;
    if(n <= 16)loop = 1;
    else if(n <= 32)loop = 2;
    else if(n <= 48)loop = 3;
    else if(n <= 64)loop = 4;
    else if(n <= 80)loop = 5;
    else if(n <= 96)loop = 6;
    else loop = 7;

    for(int i=0,j=0,k=0;i<16*loop;i++)
    {
        cout<< names[j]<< ": "<<s[k]<<endl;
        j++;
        k++;
        if(j==n)j=0;
        if(k==16)k=0;

    }
    return 0;
}
