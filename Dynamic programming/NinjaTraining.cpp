#include <bits/stdc++.h>
using namespace std;

int count(int n, vector<vector<int>> &arr, vector<vector<int>> &dp, int last)
{

    if (n == 0)
    {
        int maxi = 0;
        for (int i = 0; i < 3; i++)
        {
            if (i != last)
                maxi = max(arr[0][i], maxi);
        }
        -

            return maxi;
    }

    if (dp[n][last] != -1)
        return dp[n][last];
    int maxi = 0;
    for (int i = 0; i < 3; i++)
    {
        if (i != last)
        {

            maxi = max(maxi, count(n - 1, arr, dp, i) + arr[n][i]);
            // cout << maxi << endl;
        }
    }
    dp[n][last] = maxi;
    return maxi;
}

int ninjaTraining(int n, vector<vector<int>> &arr)
{
    vector<vector<int>> dp(n, vector<int>(4, -1));
    int x = 3;

    cout << count(n - 1, arr, dp, x);
}
int main()
{
    int n;
    cin >> n;

    vector<vector<int>> arr;
    for (int i = 0; i < n; i++)
    {
        vector<int> vec;
        for (int j = 0; j < 3; j++)
        {
            int a;
            cin >> a;
            vec.push_back(a);
        }
        arr.push_back(vec);
    }
    ninjaTraining(n, arr);
    return 0;
}
