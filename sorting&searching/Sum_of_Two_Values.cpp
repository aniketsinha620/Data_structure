#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n, sum;
    cin >> n >> sum;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    map<int, int> m;
    int diff = 0;
    bool ans = true;
    for (int i = 0; i < n; i++)
    {
        diff = sum - arr[i];
        if (m.find(diff) != m.end())
        {
            cout << m[diff] + 1 << " " << i + 1;
            ans = false;
            break;
        }
        m[arr[i]] = i;
    }
    if (ans)
    {
        cout << "IMPOSSIBLE" << endl;
    }
    return 0;
}