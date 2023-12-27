#include <bits/stdc++.h>
using namespace std;

void summation(vector<int> arr, int target, int i, vector<int> &dp)
{
    if (i == arr.size())
    {
        if (target == 0)
        {
            for (int i = 0; i < dp.size(); i++)
                cout << dp[i];
            cout << endl;
        }

        return;
    }

    dp.push_back(arr[i]);
    target = target - arr[i];
    summation(arr, target, i + 1, dp);
    target = target + arr[i];
    dp.pop_back();

    summation(arr, target, i + 1, dp);
}
int main()
{
    vector<int> v = {1, 2, 3};
    vector<int> dp;
    summation(v, 3, 0, dp);
    return 0;
}