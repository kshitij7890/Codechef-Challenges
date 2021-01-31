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
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int sum = accumulate(arr.begin(), arr.end(), 0);
        if (abs(sum) % 2 == 0 || sum == 0)
            cout << "1" << endl;
        else
            cout << "2" << endl;
    }
    return 0;
}