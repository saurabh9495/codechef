#include <iostream>
using namespace std;

int main()
{
    int testcases;
    cin >> testcases;
    for (int i = 0; i < testcases; i++)
    {
        string st;
        cin >> st;
        int ctr = 0;
        for (int j = 0; j < st.length() - 1; j++)
        {
            if (st[j] != st[j + 1])
            {
                ctr++;
                j++;
            }
        }
        cout << ctr << endl;
    }

    return 0;
}