#include <bits/stdc++.h>
using namespace std;

// max sum of the subsequence  which donot include adjacent numbers
int max_sum(int n, vector<int> &dp, int arr[])
{ // top dowm 
    if (n == 0)
        return arr[0];
    if (n < 0)
        return 0;
    if (dp[n] != -1)
    {
        return dp[n];
    }

    int left = max_sum(n - 2, dp, arr) + arr[n];
    int right = max_sum(n - 1, dp, arr);
    dp[n] = max(left, right);
}

int sum(int n, int arr[])
{
    // dowm up 

    int prev = arr[0];
    int prev2 = 0;
    int curr;
    for (int i = 1; i < n; i++)
    {
        int left = arr[i];
        if (i > 1)
            left += prev2;
        int right = prev;

        curr = max(left, right);
        prev2 = prev;
        prev = curr;
    }
    return prev;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cout << "Enter the value of n: ";
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        vector<int> dp(n, -1);
        cout << max_sum(n - 1, dp, arr);
        cout << endl;
        cout << sum(n, arr);
    }

    return 0;
}
