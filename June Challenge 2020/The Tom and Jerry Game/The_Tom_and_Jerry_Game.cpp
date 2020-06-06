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
            for (lli j = ts - 1; j > 1; j -= 2)
            {
                cout << j << " ";
            }
            cout << endl;
        }
        else
        {
            cout << "should";
        }
    }
    return 0;
}