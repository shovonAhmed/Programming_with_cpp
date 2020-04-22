#include<iostream>
using namespace std;
int main()
{
    int t,n,l,j,i,rem,cnt1,cnt2,cnt3,cnt4,cnt5,cnt6,cnt7,cnt8,cnt9,cnt0;
    cin>>t;
    while(t--)
    {
        cnt1=cnt2=cnt3=cnt4=cnt5=cnt6=cnt7=cnt8=cnt9=cnt0=0;
        cin>>n;

        for(l=1; l<=n; l++)
        {
            i=l;
            for(j=1; ; j++)
            {
                rem=i%10;

                if(rem==0)
                    cnt0++;
                else if(rem==1)
                    cnt1++;
                else if(rem==2)
                    cnt2++;
                else if(rem==3)
                    cnt3++;
                else if(rem==4)
                    cnt4++;
                else if(rem==5)
                    cnt5++;
                else if(rem==6)
                    cnt6++;
                else if(rem==7)
                    cnt7++;
                else if(rem==8)
                    cnt8++;
                else
                    cnt9++;
                i=i/10;
                if(i==0)
                    break;
            }

        }
        cout<<cnt0<< " "<<cnt1<<" "<<cnt2<<" "<<cnt3<<" "<<cnt4<<
            " "<<cnt5<< " "<<cnt6<<" "<<cnt7<<" "<<cnt8<<" "<<cnt9<<endl;
    }
}
