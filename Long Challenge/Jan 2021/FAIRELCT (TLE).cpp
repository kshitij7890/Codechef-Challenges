#include <bits/stdc++.h>
using namespace std;

int minA(vector<int> &arr1)
{
    return *min_element(arr1.begin(), arr1.end());
}

int maxB(vector<int> &arr2)
{
    return *max_element(arr2.begin(), arr2.end());
}

int sumA(vector<int> &arr1)
{
    return accumulate(arr1.begin(), arr1.end(), 0);
}

int sumB(vector<int> &arr2)
{
    return accumulate(arr2.begin(), arr2.end(), 0);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> arr1(n);
        vector<int> arr2(m);
        for (int i = 0; i < n; i++)
        {
            cin >> arr1[i];
        }

        for (int i = 0; i < m; i++)
        {
            cin >> arr2[i];
        }

        //int minA=*min_element(arr1.begin(),arr1.end());
        //int maxB=*max_element(arr2.begin(),arr2.end());
        int count = 0;
        while (minA(arr1) <= maxB(arr2) && sumA(arr1) <= sumB(arr2))
        {
            auto it1 = find(arr1.begin(), arr1.end(), minA(arr1));
            auto it2 = find(arr2.begin(), arr2.end(), maxB(arr2));
            swap(arr1[it1 - arr1.begin()], arr2[it2 - arr2.begin()]);
            count++;
        }
        if (count == 0)
            cout << "-1" << endl;
        else
            cout << count << endl;
    }

    return 0;
}