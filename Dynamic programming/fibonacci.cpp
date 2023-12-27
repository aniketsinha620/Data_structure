#include <bits/stdc++.h>
using namespace std;

int fib(int n, vector<int> &dp)
{
    // tc=o(n)
    // sc=o(n)+o(n)
    if (n <= 1)
        return n;

    if (dp[n] != -1)
        return dp[n];

    return dp[n] = fib(n - 1, dp) + fib(n - 2, dp);
}

int fib_tabular(int n, vector<int> &dp)
{
    // tc=o(n)
    // sc=o(n)

    dp[0] = 0;
    dp[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2];
    }

    return dp[n];
}

int fib_minimize(int n)
{
    // tc=o(n)
    // sc=0

    int prev2 = 0, prev = 1;
    int current;

    if (n <= 1)
        return n;
    for (int i = 2; i <= n; i++)
    {
        current = prev + prev2;
        prev2 = prev;
        prev = current;
    }
    return current;
}
int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    vector<int> dp(n + 1, -1);

    cout << fib(n, dp) << endl;
    cout << fib_tabular(n, dp) << endl;
    cout << fib_minimize(n) << endl;

    return 0;
}
