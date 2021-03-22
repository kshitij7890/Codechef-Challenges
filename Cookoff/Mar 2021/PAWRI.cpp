#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        string s, str1;
        cin >> s;
        string str2 = "pawri";
        if (s.length() < 5)
            cout << s << "\n";
        else
        {
            ll i = 0;
            while (i <= s.length() - 5)
            {
                str1 = s.substr(i, 5);
                if (str1 == "party")
                {
                    s.replace(i, 5, str2);
                    i = i + 5;
                }
                else
                    i++;
            }
            cout << s << "\n";
        }
    }
    return 0;
}