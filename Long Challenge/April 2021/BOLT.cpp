#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        double x1, x2, x3, v, ans;
        cin >> x1 >> x2 >> x3 >> v;
        ans = 100 / (x1 * x2 * x3 * v);
        double answer = round(ans * 100) / 100;
        if (answer < 9.58)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }

    return 0;
}