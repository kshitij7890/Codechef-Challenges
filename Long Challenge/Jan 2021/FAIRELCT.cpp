#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> arr1(n, 0);
        vector<int> arr2(m, 0);
        for (int i = 0; i < n; i++)
            cin >> arr1[i];
        for (int i = 0; i < m; i++)
            cin >> arr2[i];
        sort(arr1.begin(), arr1.end());
        sort(arr2.begin(), arr2.end(), greater<int>());

        int sumA = accumulate(arr1.begin(), arr1.end(), 0);
        int sumB = accumulate(arr2.begin(), arr2.end(), 0);
        int answer = 0;
        for (int i = 0; i < min(n, m); i++)
        {
            if (sumA > sumB)
                break;
            sumB += arr1[i];
            sumB -= arr2[i];
            sumA += arr2[i];
            sumA -= arr1[i];
            answer++;
        }
        if (sumA > sumB)
            cout << answer << endl;
        else
            cout << "-1" << endl;
    }
    return 0;
}