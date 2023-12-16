#include <bits/stdc++.h>
#define ll int long long
using namespace std;

int main()
{

    ll n;
    cin >> n;
    vector<pair<ll, ll>> v;
    ll x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back({x, i + 1});
    }
    sort(v.begin(), v.end());
    ll rounds = 1;
    ll ans = -1;
    for (int i = 0; i < n; i++)
    {

        if (v[i].second < ans)
        {
            rounds++;
        }
        ans = v[i].second;
    }
    cout << rounds << endl;

    
    return 0;
}