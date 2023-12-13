#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
  ll n;
  cin >> n;
  multiset<ll> m;
  ll tower;

  for (ll i = 0; i < n; i++)
  {
    cin >> tower;

    // Use iterator instead of auto
    auto a = m.upper_bound(tower);

    if (a == m.end())
    {
      m.insert(tower);
    }
    else
    {
      m.insert(tower);
      m.erase(a);
    }
  }
  cout << m.size() << endl;

  return 0;
}
