#include <bits/stdc++.h>
using namespace std;

int bintodec(int n)
{
    int num = n;
    int dec = 0;
    int base = 1;

    int temp = num;
    while (temp)
    {
        int last = temp % 10;
        temp = temp / 10;
        dec += last * base;
        base = base * 2;
    }

    return dec;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        char s[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p'};
        int n;
        cin >> n;
        string str;
        cin >> str;

        for (int i = 0; i < n; i += 4)
        {
            int num = stoi(str.substr(i, 4));
            int res = bintodec(num);
            cout << s[res];
        }
        cout << endl;
    }

    return 0;
}