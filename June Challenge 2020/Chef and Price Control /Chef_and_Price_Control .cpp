#include <iostream>
using namespace std;
int main()
{
    int testcases;
    cin >> testcases;
    for (int i = 0; i < testcases; i++)
    {
        int n, k, val, sum_total = 0, sum_updated = 0;
        cin >> n >> k;
        for (int j = 0; j < n; j++)
        {
            cin >> val;
            sum_total += val;
            if (val > k)
            {
                sum_updated += k;
            }
            else
            {
                sum_updated += val;
            }
        }
        cout << sum_total - sum_updated << endl;
    }
    return 0;
}