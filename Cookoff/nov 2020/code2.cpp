#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a >> b;
        int flag1 = 0, flag2 = 0;
        int ans = 0;
        for (int i = 0; i < a.size(); i += 2)
        {
            if (a[i] != b[i] && flag1 == 0)
            {
                flag1 = 1;
                ans++;
            }
            else if (a[i] == b[i] && flag1 == 1)
            {
                flag1 = 0;
            }
        }
        for (int i = 1; i < b.size(); i += 2)
        {
            if (a[i] != b[i] && flag2 == 0)
            {
                flag2 = 1;
                ans++;
            }
            else if (a[i] == b[i] && flag2 == 1)
            {
                flag2 = 0;
            }
        }
        cout << ans << endl;
    }
    return 0;
}