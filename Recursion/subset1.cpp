#include <bits/stdc++.h>
using namespace std;

void subset(vector<int> arr, int i, vector<int> &s, int sum)
{
    if (i >= arr.size())
    {
        s.insert(sum);
        return;
    }
    sum += arr[i];
    subset(arr, i + 1, s, sum);
    sum -= arr[i];
    subset(arr, i + 1, s, sum);
}

vector<int> subsetSum(vector<int> &num)
{

    vector<int> arr;
    subset(num, 0, s, 0);

    sort(arr.begin(), arr.end());
    return arr;
}

int main()
{
    // Example usage
    vector<int> numbers = {2, 3};
    vector<int> result = subsetSum(numbers);

    cout << "Subset Sums: ";
    for (int i : result)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
