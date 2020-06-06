#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
typedef long long int lli;

bool isPerfectSquare(long double x)
{
    long double sr = sqrt(x);
    return ((sr - floor(sr)) == 0);
}

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
            lli ctr = 0;
            for (lli j = ts; j > 1; j -= 2)
            {
                lli tt = ts, jj = j;
                tt = tt / 2;
                jj = jj / 2;
                if (tt % 2 == 0 and jj % 2 == 0)
                {
                    if(isPerfectSquare(tt)){
                        ctr++;
                        continue;
                    }
                    lli ttt = tt / 2, jjj = jj / 2;
                    if (ttt % 2 == 1 and jjj % 2 == 1)
                    {
                        break;
                    }
                    else if (ttt % 2 == 0 and jjj % 2 == 1)
                    {
                        break;
                    }
                    else
                    {
                        ctr++;
                        break;
                    }
                }
                else if (tt % 2 == 1 and jj % 2 == 1)
                {
                    break;
                }
                else if (tt % 2 == 0 and jj % 2 == 1)
                {
                    break;
                }
                else
                {
                    ctr++;
                    break;
                }
            }
            cout << ctr << endl;
        }
    }
    return 0;
}