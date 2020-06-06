#include <iostream>
#include <vector>
using namespace std;
typedef long long int lli;
int main()
{
    lli testcases;
    cin >> testcases;
    for (lli i = 0; i < testcases; i++)
    {
        lli ts, js;
        cin >> ts;
        if (ts % 2 == 1)
        {
            cout << ts / 2 << endl;
        }
        else
        {
            lli ctr=0;
            for (lli j = ts-2; j > 1; j-=2)
            {
                lli tt = ts,jj = j;
                while (jj > 1)
                {
                    tt = tt/2;
                    jj = j/2;
                    if(tt%2 ==0 and jj%2==0){
                        continue;
                    }
                    else if (tt%2 == 1 and jj%2 == 1)
                    {
                        break;
                    }
                    else if (tt%2 == 0 and jj%2 == 1)
                    {
                        break;
                    }
                    else
                    {
                        ctr++;
                        break;
                    }
                }               
            }
            cout << ctr << endl;
        }
    }
    return 0;
}