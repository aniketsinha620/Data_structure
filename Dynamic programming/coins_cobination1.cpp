#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

int main()
{
    ll n, m;
    cin >> n >> m;
    vector<ll> arr;
    ll x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        arr.push_back(x);
    }
    vector<ll> dp(m + 1, 0);
    dp[0] = 1;

    for (int i = 1; i <= m; i++)
    {

        for (int j = 0; j < n; j++)
        {
            if (i - arr[j] >= 0)
            {
                dp[i] = (dp[i] + dp[i - arr[j]]) % MOD;
            }
        }
    }
    cout << dp[m] << endl;

    return 0;
}
