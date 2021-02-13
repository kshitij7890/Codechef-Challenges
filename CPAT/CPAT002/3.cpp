#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long m;
        cin >> m;
        vector<long long> arr(n);
        for (long long i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());
        long long res = arr[m - 1] - arr[0];
        for (long long i = 1; i + m - 1 < n; i++)
        {
            res = min(res, arr[i + m - 1] - arr[i]);
        }
        cout << res << endl;
    }
    return 0;
}