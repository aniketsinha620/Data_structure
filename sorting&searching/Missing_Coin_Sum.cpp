#include <bits/stdc++.h>
#define ll int long long
using namespace std;

int main()
{
    ll n;
    cin >> n;
    vector<ll> arr;
    ll x;
    ll sum = 1;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        arr.push_back(x);
    }
    sort(arr.begin(), arr.end());
    for (int i = 0; i < n; i++)
    {

        if (sum < arr[i])
            break;
        else
        {
            sum += arr[i];
        }
    }
    cout << sum << endl;
    return 0;
}