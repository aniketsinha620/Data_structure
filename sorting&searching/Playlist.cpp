#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n;
    cin >> n;
    vector<ll> arr;
    set<ll> s;
    ll x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        arr.push_back(x);
    }
    ll ans = 0;
    ll start = 0, end = 0;
    while (end < n)
    {
        if (s.count(arr[end]) == 0)
        {
            s.insert(arr[end]);
            ans = max(ans, (ll)s.size());
            end++;
        }
        else
        {
            s.erase(arr[start]);
            start++;
        }
    }

    cout << ans << endl;
    return 0;
}
