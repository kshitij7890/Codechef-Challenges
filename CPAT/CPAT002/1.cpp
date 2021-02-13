#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        unordered_set<char>us;
        for(int i=0;i<s.length();i++)
        {
            us.insert(s[i]);
        }
        if(us.size()==3)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}