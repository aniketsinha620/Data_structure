
#include <bits/stdc++.h>
using namespace std;

int combination(vector<int> &dp, int n)
{
    
    for (int i = 1; i <=6; i++)
    {
        if (dp[n] != 0)
            return dp[n];
        if(n-i>=0)
        dp[n] += combination(dp, n - i) + 1;
    }
    return dp[n];
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;

        cin >> n;
        vector<int> dp(n + 1, 0);
        cout << combination(dp, n) << endl;
    }

    return 0;
}
