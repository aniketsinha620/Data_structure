#include <bits/stdc++.h>
using namespace std;

void subset(vector<int> arr, int i, vector<vector<int>> v, vector<int> dp, int start)
{
    if (i >= arr.size())
    {
        v.push_back(dp);
        return;
    }
    for (int j = start; j < arr.size(); j++)
    {
        if (j > start && arr[j] == arr[i - 1])
            continue;
        dp.push_back(arr[i]);
        subset(arr, i + 1, v, dp, i + 1);
        dp.pop_back();
    }
}

vector<int> subsetSum(vector<int> &arr)
{
    sort(arr.begin(), arr.end());
    vector<int> dp;
    vector<vector<int>> v;
    subset(arr, 0, v, dp, 0);
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[i].size(); j++)
            cout << v[i][j];

        cout << endl;
    }
}

int main()
{
    // Example usage
    vector<int> arr = {1, 2, 2};
    subsetSum(arr);

    return 0;
}
