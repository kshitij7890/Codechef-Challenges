#include <bits/stdc++.h>
#include <string>
using namespace std;

int convert(string s)
{
    string s1 = s.substr(0, 2);
    string s2 = s.substr(3, 2);
    string s3 = s1 + s2;
    int fourdigit = stoi(s3);
    if (s[6] == 'A' && s1 == "12")
    {
        fourdigit -= 1200;
    }
    else if (s[6] == 'P' && s1 != "12")
    {
        fourdigit += 1200;
    }
    return fourdigit;
}

int main()
{
    int t;
    cin >> t;
    string dumy;
    getline(cin, dumy);
    while (t--)
    {
        //ios_base::sync_with_stdio(false);
        //cin.tie(NULL);
        //cout.tie(NULL);
        string str;
        getline(cin, str);
        int n;
        cin >> n;
        vector<string> vec(n);
        getline(cin, dumy);
        for (int i = 0; i < n; i++)
        {
            getline(cin, vec[i]);
            string sub1 = vec[i].substr(0, 8);
            string sub2 = vec[i].substr(9, 8);
            if (convert(str) >= convert(sub1) && convert(str) <= convert(sub2))
            {
                cout << "1";
            }
            else
                cout << "0";
        }
        cout << endl;

        /* just for checking
        int a = convert("11:59 PM");
        int b = convert("12:00 AM");
        int c = convert("01:00 AM");
        int d = convert("11:59 AM");
        int e = convert("12:00 PM");
        int f = convert("01:00 PM");
        cout << a << "    " << b << "    " << c << "   " << d << "   " << e << "   " << f << "   " << endl;
        */
    }
    return 0;
}