#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int res = 0;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            if (i <= 10)
                res = max(res, i);

            if ((n / i) <= 10)
                res = max(res, n / i);
        }
    }
    cout << res;
    return 0;
}