#include<bits/stdc++.h>
using namespace std;
vector<int>v(32100);
vector<int>primeList;
void sieve()
{
    int i,j;
    for(i=4; i<32100; i+=2)
        v[i]=1;
    for(i=3; i*i<=32100; i+=2)
    {
        if(v[i]==0)
        {
            for(j=i*i; j<32100; j+=i)
                v[j]=1;
        }
    }
    primeList.clear();
    for(i=2; i<32100; i++)
    {
        if(v[i]==0)
            primeList.push_back(i);
    }

}


int main()
{
    sieve();
    int x,y,j;
    while ( scanf ("%d %d", &x, &y) ) {
        if ( x == 0 && y == 0 ) break;

        if ( x > y )
            swap (x, y);

        int i = 0;

        while ( primeList [i] < x )
            i++;

        while ( primeList [i + 2] <= y ) {
            if ( primeList [i + 2] - primeList [i + 1] == primeList [i + 1] - primeList [i] ) {
                int startIndex = i;
                int endIndex = i + 2;
                int diff = primeList [i + 1] - primeList [i];
                while ( i + 3 < primeList.size () && primeList [i + 3] - primeList [i + 2] == diff ) {
                    endIndex++;
                    i++;
                }

                if ( primeList [endIndex] <= y ) {
                    if ( startIndex == 0 || primeList [startIndex] - primeList [startIndex - 1] != diff)
                        {
                            cout<<primeList[startIndex];
                            for(j=startIndex+1;j<=endIndex;j++)
                                cout<< " "<<primeList[j];
                            cout<<endl;
                        }
                }
                else break;
            }
            i++;
        }
    }
}
