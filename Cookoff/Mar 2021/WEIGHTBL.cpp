#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int w1;
    int w2;
    int x1;
    int x2;
    int m;
    int n;
    vector<int> v1;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> w1 >> w2 >> x1 >> x2 >> m;
        int diff = w2 - w1;
        int f = x1 * m;
        int g = x2 * m;
        if (diff <= g && diff >= f)
        {
            v1.push_back(1);
        }
        else
        {
            v1.push_back(0);
        }
    }

    for (int x : v1)
    {
        cout << x << endl;
    }
    return 0;
}