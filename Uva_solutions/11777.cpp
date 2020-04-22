#include<iostream>
using namespace std;
int main()
{
    int t,term1,term2,final,attendance,ct1,ct2,ct3,best,sum,i=1;
    cin>>t;
    while(t--)
    {
        cin>>term1>>term2>>final>>attendance>>ct1>>ct2>>ct3;
        if((ct1>=ct3) && (ct2>=ct3))
        {
            best=(ct1+ct2)/2;
        }
        else if((ct2>=ct1) && (ct3>=ct1))
        {
            best=(ct3+ct2)/2;
        }
        else
        {
            best=(ct1+ct3)/2;
        }

        sum=term1+term2+final+attendance+best;
        if(sum>=90)
        {
            cout<< "Case "<<i<< ": A"<<endl;
        }
        else if(sum>=80 && sum<90)
        {
            cout<< "Case "<<i<< ": B"<<endl;
        }
        else if(sum>=70 && sum<80)
        {
            cout<< "Case "<<i<< ": C"<<endl;
        }
        else if(sum>=60 && sum<70)
        {
            cout<< "Case "<<i<< ": D"<<endl;
        }
        else
        {
            cout<< "Case "<<i<< ": F"<<endl;
        }
        i++;

    }
}
