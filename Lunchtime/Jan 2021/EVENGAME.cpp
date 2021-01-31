#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);
        int count1 = 0, count2 = 0, count3 = 0, count4 = 0;
        //cout << ceil((double)n / 2.0);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] != -1)
                count1++;
            if (arr[i] > k)
                count2++;
            if (arr[i] <= 1 && arr[i] >= 0)
                count3++;
        }
        if (count1 < ceil((double)n / 2.0))
            cout << "Rejected" << endl;
        else if (count2 > 0)
            cout << "Too Slow" << endl;
        else if (count3 == n)
            cout << "Bot" << endl;
        else
            cout << "Accepted" << endl;
    }
    return 0;
}