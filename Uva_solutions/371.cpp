#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    long long int l,h,v,s,i,max,cnt,largest_num,temp;
    while(cin>>l>>h)
    {
        if(l==0 && h==0)
        {
            break;
        }
        if(l>h)
            {
                swap(l,h);
            }
        max=0;
        for(i=l; i<=h; i++)
        {
            temp=i;
            cnt=0;

            while(1)
            {
                if(temp%2==0)
                {
                    temp=temp/2;
                }
                else
                    temp=3*temp+1;
                cnt++;
                if(temp==1)
                    break;
            }
            if(cnt>max)
            {
                max=cnt;
                largest_num=i;
            }

        }
        cout<<"Between "<<l<<" and "<<h<<", "<<largest_num<<" generates the longest sequence of "<<max<<" values."<<endl;

    }
}
