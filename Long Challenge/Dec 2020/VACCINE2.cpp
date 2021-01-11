#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, d, not_risk = 0, risk = 0;
        cin >> n >> d;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] <= 9 || arr[i] >= 80)
                risk++;
            else
                not_risk++;
        }
        int ans = (risk / d) + (risk % d) + (not_risk / d) + (not_risk % d);
        cout << ans << endl;
    }
    return 0;
}