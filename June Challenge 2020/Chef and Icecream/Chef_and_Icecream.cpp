#include <iostream>
#include <vector>
using namespace std;
// 5 5 15
int main()
{
    int testcases;
    cin >> testcases;
    for (int i = 0; i < testcases; i++)
    {
        int n, val, j = 0, ctr5 = 0, ctr10 = 0;
        cin >> n;
        vector<int> v;
        for (j = 0; j < n; j++)
        {
            cin >> val;
            v.push_back(val);
        }
        int temp,k=0;
        for (auto it = v.begin(); it != v.end(); it++,k++)
        {
            temp = *it / 5;
            if (temp == 1)
            {
                ctr5++;
            }
            else if (temp == 2)
            {
                ctr10++;
                ctr5--;
                if (ctr5 < 0)
                {
                    break;
                }
            }
            else
            {
                if (ctr10 > 0)
                {
                    ctr10--;
                }
                else if (ctr5 > 1)
                {
                    ctr5 -= -2;
                }
                else
                {
                    break;
                }
            }
        }
        if (k == n)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}