#include <bits/stdc++.h>
using namespace std;

int find_index(vector<int> w, int x)
{
    auto it = find(w.begin(), w.end(), x);
    return (it - w.begin());
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> w(n);
        vector<int> l(n);
        for (int i = 0; i < n; i++)
        {
            cin >> w[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> l[i];
        }
        vector<int> posi(n);
        for (int i = 0; i < n; i++)
        {
            posi[i] = i;
        }
        vector<int> x(n);
        for (int i = 0; i < n; i++)
        {
            x[i] = w[i];
        }
        sort(x.begin(), x.end());
        int count = 0;
        for (int i = 1; i < n; i++)
        {
            int index = find_index(w, x[i]);
            int p = posi[find_index(w, x[i - 1])];
            int b = index;
            while (b <= p)
            {
                b = b + l[index];
                posi[index] = b;
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}