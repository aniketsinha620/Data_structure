#include <bits/stdc++.h>
#define ll long long
using namespace std;

// we have top find the median for the array
int main()
{
    ll n;
    cin >> n;
    ll arr[n];
    ll sum = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    for (int i = 0; i < n; i++)
    {
        sum += abs(arr[i] - arr[n / 2]);
    }
    cout << sum << endl;
    return 0;
}
