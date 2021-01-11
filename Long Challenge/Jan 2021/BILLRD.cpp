#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, a, b, aa, bb;
        cin >> n >> k >> a >> b;

        if (a == b)
        {
            aa = bb = n;
        }

        else if (a > b)
        {
            if (k % 4 == 0)
            {
                bb = 0;
                aa = a - b;
            }
            else if (k % 4 == 1)
            {
                aa = n;
                bb = n - a + b;
            }
            else if (k % 4 == 2)
            {
                aa = n - a + b;
                bb = n;
            }
            else if (k % 4 == 3)
            {
                aa = 0;
                bb = a - b;
            }
        }

        else if (a < b)
        {
            if (k % 4 == 0)
            {
                aa = 0;
                bb = b - a;
            }
            else if (k % 4 == 1)
            {
                aa = n - b + a;
                bb = n;
            }
            else if (k % 4 == 2)
            {
                aa = n;
                bb = n - b + a;
            }
            else if (k % 4 == 3)
            {
                aa = b - a;
                bb = 0;
            }
        }
        cout << aa << " " << bb << endl;
    }
    return 0;
}