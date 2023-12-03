#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

class Solution
{
public:
    void sum(vector<int> arr, int k, int i, vector<int> v, int y, set<vector<int>> &s)
    {
        if (i >= arr.size())
        {
            if (y == k)
            {
                sort(v.begin(), v.end());
                s.insert(v);
            }
            return;
        }

        v.push_back(arr[i]);
        y += arr[i];
        sum(arr, k, i + 1, v, y, s);
        v.pop_back();
        y -= arr[i];
        sum(arr, k, i + 1, v, y, s);
    }

    vector<vector<int>> combinationSum(vector<int> &arr, int k)
    {
        vector<int> v;
        set<vector<int>> s;
        sum(arr, k, 0, v, 0, s);

        // Print the result
        for (const auto &combination : s)
        {
            cout << "[ ";
            for (const auto &num : combination)
            {
                cout << num << " ";
            }
            cout << "]" << endl;
        }

        // Convert set to vector and return
        return vector<vector<int>>(s.begin(), s.end());
    }
};

int main()
{
    Solution solution;
    vector<int> arr = {2, 1, 6, 7};
    int k = 7;

    vector<vector<int>> result = solution.combinationSum(arr, k);

    // Printing the result
    // for (const auto& combination : result) {
    //     cout << "[ ";
    //     for (const auto& num : combination) {
    //         cout << num << " ";
    //     }
    //     cout << "]" << endl;
    // }

    return 0;
}
