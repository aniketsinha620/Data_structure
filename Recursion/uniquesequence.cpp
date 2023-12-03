#include <bits/stdc++.h>
using namespace std;
void generator(string a, int i, vector<char> ch, set<vector<char>> &s)
{
    if (i >= a.length())
    {
        sort(ch.begin(), ch.end());
        s.insert(ch);

        // cout << i << endl;

        return;
    }
    ch.push_back(a[i]);
    generator(a, i + 1, ch, s);
    ch.pop_back();
    generator(a, i + 1, ch, s);
}

string moreSubsequence(int n, int m, string a, string b)
{
    vector<char> ch;
    set<vector<char>> s;
    generator(a, 0, ch, s);
    int x = s.size();
    vector<char> ch1;

    set<vector<char>> s1;
    generator(b, 0, ch1, s1);
    int y = s1.size();
  
    if (x > y)
        return a;
    else if (y > x)
        return b;
    else
        return a;
}
int main()
{
    int n, m;
    cin >> n >> m;
    string a, b;
    cin >> a >> b;
    cout << moreSubsequence(n, m, a, b);
}