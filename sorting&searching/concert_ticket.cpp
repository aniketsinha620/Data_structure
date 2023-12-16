#include <bits/stdc++.h>
#define ll int long long
using namespace std;

int main()
{
    ll n, q;
    cin >> n >> q;

    multiset<ll> s;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        s.insert(x);
    }

    for (int i = 0; i < q; i++)
    {
        ll x;
        cin >> x;
        auto y = s.upper_bound(x);
        if (y == s.begin())
        {
            cout << "-1" << endl;
            continue;
        }
        else
        {
            cout << *(--y) << endl;
            s.erase(y);
        }
    }

    return 0;
}
