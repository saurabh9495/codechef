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
        lli n, k, val, initial_sum = 0, updated_sum = 0;
        cin >> n >> k;
        vector<lli> v;
        for (lli j = 0; j < n; j++)
        {
            cin >> val;
            v.push_back(val);
        }
        for (auto x : v)
        {
            initial_sum += x;
        }
        for (auto it = v.begin(); it != v.end(); it++)
        {
            if (*it > k)
            {
                updated_sum += k;
            }
            else
            {
                updated_sum += *it;
            }
        }
        cout << initial_sum - updated_sum << endl;
    }
    return 0;
}