#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        long long n, b;
        cin >> n >> b;
        vector<long long> arr(n);
        for (long long i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        long long currsum = 0;
        long long s = 0;
        long long res = 0;

        for (long long e = 0; e < n; e++)
        {
            currsum += arr[e];

            if (currsum <= b)
                res = max(res, currsum);

            else if (currsum > b)
            {
                while (currsum > b && s < e)
                {
                    currsum -= arr[s];
                    s++;
                    if (currsum <= b)
                        res = max(res, currsum);
                }
            }
        }
        cout << res << endl;
    }
    return 0;
}