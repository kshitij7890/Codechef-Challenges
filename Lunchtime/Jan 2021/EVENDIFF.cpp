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
        vector<int> vec(n, 0);
        for (int i = 0; i < n; i++)
            cin >> vec[i];
        int o = 0, e = 0;
        for (int i = 0; i < n; i++)
        {
            if (vec[i] % 2 == 0)
                e++;
            else
                o++;
        }
        cout << min(o, e) << endl;
    }
    return 0;
}