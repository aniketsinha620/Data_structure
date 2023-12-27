#include <bits/stdc++.h>
using namespace std;

// Consider a money system consisting of n
//  coins. Each coin has a positive integer value. Your task is to produce a sum of money x
//  using the available coins in such a way that the number of coins is minimal.

// For example, if the coins are {1,5,7}
//  and the desired sum is 11
// , an optimal solution is 5+5+1
//  which requires 3
//  coins.
int count(vector<int> &arr, vector<int> &dp, int n, int m)
{
    if (m == 0)
        return 0;

    if (dp[m] != -1)
        return dp[m];
        
    int ans = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (m - arr[i] >= 0)
        {
            int val = count(arr, dp, n, m - arr[i]);
            if (val != INT_MAX && val + 1 < ans)
                ans = val + 1;
        }
    }
    dp[m] = ans;
    return ans;
}
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    vector<int> dp(m + 1, -1);
    int val = count(arr, dp, n, m);
    if (val != INT_MAX)
        cout << val;
    else
        cout << "-1";
}