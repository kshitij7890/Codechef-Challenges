#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    int arr[n][k + 1];
    vector<int> sum(n, 0);
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < k + 1; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < k; j++)
        {
            sum[i] += arr[i][j];
        }
        if (sum[i] >= m && arr[i][k] <= 10)
        {
            count++;
        }
    }

    cout << count;
}