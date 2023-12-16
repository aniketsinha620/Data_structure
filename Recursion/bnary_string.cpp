#include <iostream>
#include <vector>
#include <set>

using namespace std;

void form(set<vector<string>> &s, vector<string> &dp, int n, int N)
{
    if (n == N)
    {
        s.insert(dp);

        return;
    }

    dp.push_back("0"); 
    form(s, dp, n + 1, N);
    if (n == 0 || dp[n - 1] == "0") 
    {
        dp.pop_back();
        dp.push_back("1"); 
        form(s, dp, n + 1, N);
    }
    dp.pop_back();
}

vector<string> generateString(int n)
{
    set<vector<string>> s;
    vector<string> dp;
    form(s, dp, 0, n);
    vector<vector<string>> arr;
    for (const auto &vec : s)
    {
        arr.push_back(vec);
    }
}

int main()
{
    int n;
    cin >> n;

    generateString(n);
    return 0;
}
