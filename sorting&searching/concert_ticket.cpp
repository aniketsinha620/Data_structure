#include <bits/stdc++.h>
#define ll int long long
using namespace std;

int main()
{
    ll n, q;       // Changed variable name 'm' to 'q' to avoid conflict
    cin >> n >> q; // Changed variable name 'm' to 'q'

    multiset<ll> s; // Changed variable name 'm' to 's'
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        s.insert(x);
    }

    for (int i = 0; i < q; i++) // Changed variable name 'm' to 'q'
    {
        ll x;
        cin >> x;
        auto y = s.upper_bound(x); // Changed function name 'upper_bond' to 'upper_bound'
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
