#include <bits/stdc++.h>
#define ll int long long
using namespace std;

int main()
{
    ll n;
    cin >> n;
    vector<ll> arr;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        arr.push_back(x);
    }
    ll sum = 0, final = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        final = max(final, sum);
        if (sum < 0)
        {
            sum = 0;
        }
    }
    cout << final << endl;
    return 0;
}