#include <iostream>
#include <vector>
using namespace std;
typedef long long int lli;
int maian()
{
    lli testcases;
    cin >> testcases;
    for (lli i = 0; i < testcases; i++)
    {
        lli n, k, val, sum = 0;
        vector<lli> v;
        for (lli j = 0; j < n; j++)
        {
            cin >> val;
            v.push_back(val);
        }
        for (auto it = v.begin(); it != v.end(); it++)
        {
            if (*it > k)
            {
                sum += k;
            }
            else
            {
                sum += *it;
            }
        }
        cout << sum << endl;
    }
    return 0;
}