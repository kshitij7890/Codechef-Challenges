#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string str[n];
        for (int i = 0; i < n; i++)
        {
            cin >> str[i];
        }

        int flag = 0;
        for (int i = 0; i < n; i++)
        {
            if (str[0] == "stop")
            {
                cout << "404" << endl;
                flag = 2;
                break;
            }

            if (str[i] == "stop" && str[i + 1] == "stop")
            {
                cout << "404" << endl;
                flag = 3;
                break;
            }
        }

        if (flag == 0)
            cout << "200" << endl;

    }
    return 0;
}