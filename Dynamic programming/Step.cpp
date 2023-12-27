#include <bits/stdc++.h>
using namespace std;

// you are at ground level you have to reach at n stair  you can jump 1 or 2 stair find the different number of ways you do so.
int count(int n, vector<int> &dp)
{
    if (n <= 2)
    {
        return n;
    }

    if (dp[n] != -1)
    {

        return dp[n];
    }

    dp[n] = count(n - 1, dp) + count(n - 2, dp);
}

int minma_step(int n, vector<int> &dp)
{
    if (n == 0 || n == 1)
        return 1;

    if (dp[n] != -1)
        return dp[n];

    dp[n] = min(count(n - 1, dp), count(n - 2, dp)) + 1;
}

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    vector<int> dp(n + 1, -1);
    cout << count(n, dp);

    return 0;
}
