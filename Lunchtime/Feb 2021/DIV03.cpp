#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        vector<int> arr(10);
        for (int i = 0; i < 10; i++)
        {
            cin >> arr[i];
        }
        int k;
        cin >> k;

        for (int i = 9; i >= 0; i--)
        {

            if (arr[i] < k)
            {
                k = k - arr[i];
                arr[i] = 0;
            }
            else if (arr[i] == k)
            {
                k = 0;
                arr[i] = 0;
                break;
            }
            else if (arr[i] > k)
            {
                arr[i] = arr[i] - k;
                k = 0;
                break;
            }
        }

        for (int i = 9; i >= 0; i--)
        {
            if (arr[i] != 0)
            {
                cout << i + 1 << endl;
                break;
            }
            if (i == 0)
            {
                cout << i + 1 << endl;
                break;
            }
        }
    }
    return 0;
}