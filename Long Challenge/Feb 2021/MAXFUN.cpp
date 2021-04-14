#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<long long> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        
        sort(arr.begin(), arr.end());
        cout << 2 * abs(arr.back() - arr.front()) << endl;
    }

    return 0;
}
