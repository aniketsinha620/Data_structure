#include <bits/stdc++.h>
#define MOD 1000000007
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> arr={3,5,7,8,9,10,11};
    int x;
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> x;
    //     arr.push_back(x);
    // }
    vector<int> dp(m + 1, 0);
    dp[0] = 1;

    for (int i = 0; i < n; i++)  // Change here: loop should run until i < n
    {
        for (int j = 1; j <= m; j++)
        {
            if (j - arr[i] >= 0)
            {
                dp[j] = (dp[j] + dp[j - arr[i]]) % MOD;
            }
        }
    }
    cout << dp[m] << endl;

    return 0;
}
