#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        long long nn, xx;
        cin >> nn >> xx;
        long long maxim = -1;
        for (int i = 0; i < nn; i++)
        {
            long long bb, cc;
            cin >> bb >> cc;
            if (bb <= xx)
            {
                if (cc > maxim)
                {
                    maxim = cc;
                }
            }
        }

        cout << maxim << endl;
    }
    return 0;
}