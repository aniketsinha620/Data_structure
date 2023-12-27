#include <bits/stdc++.h>
#define ll int long long
using namespace std;

int main()
{
    ll n;
    cin >> n;
    ll arr[n];
    for (ll i = 0; i < n; i++)
        cin >> arr[i];

    ll ans = 0;
    ll diff = arr[0];
    for (ll i = 1; i < n; i++)
    {
        if (arr[i] < diff)
        {

            ans += abs(arr[i] - diff);
        }
        else
        {
            diff = arr[i];
                }
    }
    cout << ans << endl;
    return 0;
}
