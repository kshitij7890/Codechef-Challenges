#include <bits/stdc++.h>
using namespace std;
const int maxi = 1000000;
int pre_fix[maxi + 1];

void util()
{
    bool prime_arr[maxi + 1];
    memset(prime_arr, true, sizeof(prime_arr));

    for (long long i = 2; i * i <= maxi; i++)
    {
        if (prime_arr[i] == true)
        {
            for (int j = 2 * i; j <= maxi; j = j + i)
                prime_arr[j] = false;
        }
    }

    pre_fix[0] = 0;
    pre_fix[1] = 1;
    for (int i = 2; i <= maxi; i++)
    {
        pre_fix[i] = pre_fix[i - 1];
        if (prime_arr[i] == true)
            pre_fix[i]++;
    }
}

int main()
{
    util();
    long long t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        long long p, q;
        cin >> p >> q;
        if (pre_fix[p] > q)
        {
            cout << "Divyam" << endl;
        }
        else
        {
            cout << "Chef" << endl;
        }
    }
    return 0;
}