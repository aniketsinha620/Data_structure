#include <bits/stdc++.h>
using namespace std;

int max_sum(int arr[], vector<int> dp, int n, int end)
{
    if (n == 1)
        return arr[1];
    if (n == 0)
        return arr[0];
    if (dp[n] != 0)
    {

        return dp[n];
    }
    int ans = INT_MIN;
    int val = 0;
    for (int i = 2; i <= n; i++)
    {
        if (n - i >= end)
        {

            val = max_sum(arr, dp, n - i, end) + arr[n];
            ans = max(ans, val);
        }
        cout << i << endl;
    }
    return dp[n] = ans;
    return ans;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    vector<int> dp(n + 1, 0);
    // cout << max_sum(arr, dp, n - 1) << endl;
    cout << max(max_sum(arr, dp, n - 1, 1), max_sum(arr, dp, n - 2, 0));

    return 0;
}
