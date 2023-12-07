// sort the pair ine term of end time movies

#include <bits/stdc++.h>
#define ll int long long
using namespace std;

int main()
{

    ll n;
    cin >> n;
    vector<pair<ll, ll>> v;
    while (n--)
    {
        ll x, y;
        cin >> x >> y;
        v.push_back(make_pair(x, y));
    }

    sort(v.begin(), v.end(), [](auto &left, auto &right) // Use of auto requires C++14
         { return left.second < right.second; });

    int end_time = -1;
    int ans = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i].first >= end_time)
        {
            ans++;
            end_time = v[i].second;
        }
    }
    cout << ans << endl;
    return 0;
}
