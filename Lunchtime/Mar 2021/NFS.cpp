#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        long long u, v, a, s;
        cin >> u >> v >> a >> s;
        if (v == 1 && u == 1)
        {
            cout << "Yes" << endl;
            continue;
        }
        float accc = (u * u) - (2 * a * s);
        if (accc < 0)
        {
            cout << "Yes\n";
            continue;
        }
        accc = pow(accc, 0.50);
        if (accc <= v)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}