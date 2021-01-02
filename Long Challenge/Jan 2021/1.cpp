#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,d;
        cin>>n>>k>>d;
        vector<int>arr(n);
        int sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            sum+=arr[i];
        }

        int rem=sum/k;
        if(rem>=d) cout<<d<<endl;
        else cout<<rem<<endl;

    }

    return 0;
}