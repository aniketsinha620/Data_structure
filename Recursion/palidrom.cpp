#include <bits/stdc++.h>
using namespace std;

bool pal(int start, int end, string s)
{
    if (start >= end)
        return true;

    if (s[start] != s[end])
        return false;

    return pal(start + 1, end - 1, s);
}

int main()
{
    string s;
    cin >> s;
    int n = s.length() - 1;

    if (pal(0, n, s))
        cout << "yes";
    else
        cout << "no";

    return 0;
}
