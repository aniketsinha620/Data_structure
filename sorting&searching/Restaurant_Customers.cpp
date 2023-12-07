#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    map<int, bool> m;
    while (n--)
    {
        int x, y;
        cin >> x >> y;
        m[x] = true;
        m[y] = false;
    }
    int ans = 0, final = 0;
    for (auto i : m)
    {

        if (i.second == 1)
        {

            ans++;
            final = max(ans, final);
        }
        else
        {
            ans--;
        }
    }
    cout << final << endl;
    return 0;
}