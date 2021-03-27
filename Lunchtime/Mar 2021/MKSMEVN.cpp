#include <bits/stdc++.h>
#define mod 1000000007;
using namespace std;

int main()
{
    long long tt;
    cin >> tt;
    while (tt--)
    {
        long long nnn;
        cin >> nnn;
        long long int od = 0, fla = 0, eve = 0;
        for (int ii = 0; ii < nnn; ii++)
        {
            long long bb;
            cin >> bb;
            if (bb & 1)
                od++;
            else if (bb == 2)
                fla = 1;
        }

        if (od % 2 == 0)
            cout << 0;
        else if (fla == 1)
            cout << 1;
        else
            cout << -1;

        cout << endl;
    }
    return 0;
}

/*
#include <bits/stdc++.h>
typedef long long int ll;
#define mod 1000000007
using namespace std;
#define IOS ios::sync_with_stdio(0);
#define endl "\n"

int main()
{
    //  IOS;
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        // ll a[n];
        ll odd = 0, flag = 0, even = 0;
        for (ll i = 0; i < n; i++)
        {
            ll b;
            cin >> b;
            if (b & 1)
            {
                odd++;
            }
            else if (b == 2)
            {
                flag = 1;
            }
        }
        // cout<<"ODD  "<<odd<<endl;
        if (odd % 2 == 0)
        {
            cout << 0;
        }
        else if (flag == 1)
        {
            cout << 1;
        }
        else
        {
            cout << -1;
        }

        cout << endl;
    }
    return 0;
}*/