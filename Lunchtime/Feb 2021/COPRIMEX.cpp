#include <bits/stdc++.h>
using namespace std;

bool isprime(int n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;

    if (n % 2 == 0 || n % 3 == 0)
        return false;

    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0) // because i is 6k-1 and i+2 is 6k+1
            return false;

    return true;
}

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long ll, rr;
        cin >> ll >> rr;
        r++;
        while (!isprime(rr))
            rr++;

        cout << rr << endl;
    }
    return 0;
}