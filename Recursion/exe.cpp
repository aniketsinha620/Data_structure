#include <bits/stdc++.h>
using namespace std;

void combination(vector<int> v, int i, vector<int> dp)
{
    if (i >= v.size())
    {
        for (auto &x : dp)
            cout << x << " ";
        cout << endl;
        return;
    }
    for (int j = i; j < v.size(); j++)
    {
        dp.push_back(v[j]);
        combination(v, i + 1, dp);
        dp.pop_back();
       
    }
}
int main()
{
    vector<int> v = {1, 2, 3};
    vector<int> dp;
    combination(v, 0, dp);
    return 0;
}