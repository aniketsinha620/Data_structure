#include <bits/stdc++.h>
#define ll int long long
using namespace std;

void arrange(map<ll, ll> mp) // Corrected the map template syntax
{
    ll rounds = 1;
    ll ans = -1;
    for (auto i : mp)
    {
        if (i.second < ans)
        {
            rounds++;
        }
        ans = i.second;
    }
    cout << rounds << endl; // Fixed to output the correct variable 'rounds'
}

int main()
{
    ll n, m;
    cin >> n >> m;
    ll arr[n];
    map<ll, ll> mp; // Changed the variable name to mp
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        mp[arr[i]] = i + 1;
    }
    while (m--)
    {
        ll x, y;
        cin >> x >> y;
        swap(mp[arr[x - 1]], mp[arr[y - 1]]); // Removed .second
        swap(arr[x - 1], arr[y - 1]);
        arrange(mp);
    }
    return 0;
}
