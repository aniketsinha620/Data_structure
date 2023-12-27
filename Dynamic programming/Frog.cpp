#include <bits/stdc++.h>
using namespace std;

// you are at ground level you have to reach at n stair  you can jump 1 or 2 stair  and the energy array is given find the min energy required to reach n level
int count(int n, vector<int> &dp, int arr[])
{

    if (n == 0)
        return 0;

    if (dp[n] != -1)
        return dp[n];

    int left = count(n - 1, dp, arr) + abs(arr[n] - arr[n - 1]);

    int right = INT_MAX;

    if (n > 1)
        right = count(n - 2, dp, arr) + abs(arr[n] - arr[n - 2]);

    return dp[n] = min(left, right);
}

int loop_count(int n, int arr[])
{
    vector<int> dp(n + 1, 0);
    int left;
    int right = INT_MAX;
    for (int i = 1; i < n; i++)
    {
        left = dp[i - 1] + abs(arr[i - 1] - arr[i]);
        if (i > 1)
            right = dp[i - 2] + abs(arr[i - 2] - arr[i]);

        dp[i] = min(right, left);
    }
    cout << dp[n - 1];
}

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    vector<int> dp(n + 1, -1);
    loop_count(n, arr);

    return 0;
}
