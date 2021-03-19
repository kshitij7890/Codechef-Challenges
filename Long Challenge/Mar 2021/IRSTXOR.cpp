#include <bits/stdc++.h>
using namespace std;

long long findmaxprod(int n)
{
    long long bitcount = 0;
    long long num = n;
    while (num = num >> 1)
        bitcount++;

    long long a = (1 << bitcount) - 1;
    long long b = a ^ n;
    return a * b;
}

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long num;
        cin >> num;
        long long max = findmaxprod(num);
        cout << max << endl;
    }
    return 0;
}