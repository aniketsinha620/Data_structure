
// if the distinct number in the array

#include <iostream>
#include <vector>

class Solution
{
public:
    void set(const std::vector<int> &arr, int i, int target, std::vector<int> &current, std::vector<std::vector<int>> &result)
    {
        // Base case: if we reach the end of the array
        if (i == arr.size())
        {
            // If the target is achieved, add the current combination to the result
            if (target == 0)
            {
                result.push_back(current);
            }
            return;
        }

        // Include the current element in the combination if it doesn't exceed the target
        if (target >= arr[i])
        {
            current.push_back(arr[i]);
            set(arr, i, target - arr[i], current, result);
            current.pop_back(); // Backtrack to explore other possibilities
        }

        // Exclude the current element and move to the next one
        set(arr, i + 1, target, current, result);
    }

    std::vector<std::vector<int>> combinationSum(const std::vector<int> &arr, int target)
    {
        std::vector<std::vector<int>> result;
        std::vector<int> current;
        set(arr, 0, target, current, result);
        return result;
    }
};

int main()
{
    Solution solution;
    std::vector<int> arr = {2, 3, 6, 7};
    int target = 7;

    std::vector<std::vector<int>> combinations = solution.combinationSum(arr, target);

    // Displaying the result
    std::cout << "Combinations that add up to " << target << ":\n";
    for (const auto &combination : combinations)
    {
        std::cout << "[ ";
        for (int num : combination)
        {
            std::cout << num << " ";
        }
        std::cout << "]\n";
    }

    return 0;
}
