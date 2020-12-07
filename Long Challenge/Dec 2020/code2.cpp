#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        float a, b;
        cin >> a >> b;
        if (a > 0 && b > 0)
            cout << ceil(max(a, b) * (min(a, b) / 2)) << endl;
    }

    return 0;
}