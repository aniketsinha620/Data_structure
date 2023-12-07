#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int x;
    map<int, int> m;
    while (n--)
    {
        cin >> x;
        m[x]++;
    }
    int ans = 0;
    cout << m.size() << endl;
    return 0;
}