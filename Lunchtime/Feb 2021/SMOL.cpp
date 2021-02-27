#include <iostream>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;
        if (k != 0)
            cout << n % k << endl;
        else
            cout << n << endl;
    }
    return 0;
}