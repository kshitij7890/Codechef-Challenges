#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int main()
{
    int d1, v1, d2, v2, p, count_days = 0, count_vac = 0;
    cin >> d1 >> v1 >> d2 >> v2 >> p;
    for (int i = 1; i < min(d1, d2); i++)
    {
        count_days++;
        if (count_vac >= p)
            break;
    }
    for (int i = min(d1, d2); i < max(d1, d2); i++)
    {

        if (d1 < d2)
            count_vac += v1;
        else
            count_vac += v2;
        count_days++;
        if (count_vac >= p)
            break;
    }

    for (int i = max(d1, d2); i < INT_MAX; i++)
    {

        count_vac += (v1 + v2);
        count_days++;
        if (count_vac >= p)
            break;
    }

    cout << count_days;

    return 0;
}