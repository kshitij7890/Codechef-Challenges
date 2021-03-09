#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, h, x;
    cin >> n >> h >> x;
    vector<int> arr(n);
    if (h <= x)
    {
        cout << "YES";
        return 0;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] >= h - x)
        {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";

    return 0;
}