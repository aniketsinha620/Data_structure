#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

class Solution {
public:
    void kpt(vector<int> arr, int k, int i, vector<int> dp, int sum, set<vector<int>>& s) {

        if (i >= arr.size()) {
            if (sum == k) {
                sort(dp.begin(), dp.end());
                s.insert(dp);
                cout<<"hello"<<dp[0];
                return;
            }
            return;
        }
        sum += arr[i];
        dp.push_back(arr[i]);
        kpt(arr, k, i + 1, dp, sum, s);
        sum -= arr[i];
        dp.pop_back();
        kpt(arr, k, i + 1, dp, sum, s);
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int> dp;
        set<vector<int>> s;
        kpt(candidates, target, 0, dp, 0, s);
        vector<vector<int>> v1;
        for (auto &i : s) {
            v1.push_back(i);
        }
        return v1;
    }
};

int main() {
    Solution solution;

    // Example usage:
    vector<int> candidates = {10, 1, 2, 7, 6, 1, 5};
    int target = 8;

    vector<vector<int>> result = solution.combinationSum2(candidates, target);

    // Displaying the result
    for (const auto& vec : result) {
        cout << "[ ";
        for (int num : vec) {
            cout << num << " ";
        }
        cout << "]" << endl;
    }

    return 0;
}
