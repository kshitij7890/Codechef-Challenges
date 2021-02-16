#include <bits/stdc++.h>
using namespace std;

int main()
{
    /*ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif*/

    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        string str[n], x, y;
        for (long long i = 0; i < n; i++)
            cin >> str[i];

        sort(str, str + n);

        long long res = 0;
        for (long long i = 0; i < n; i++)
        {
            for (long long j = i + 1; j < n; j++)
            {
                x = str[i];
                y = str[j];
                swap(x[0], y[0]);
                if (x[0] == y[0])
                {
                }
                else if (binary_search(str, str + n, x) == false && binary_search(str, str + n, y) == false)
                    res = res + 2;
            }
        }
        cout << res << endl;
    }

    return 0;
}