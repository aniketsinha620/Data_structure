#include <bits/stdc++.h>
using namespace std;



int combination(vector<int> arr, int i, int sum, int k)
{
    if (i >= arr.size())
    {
        if (sum == k)
        {

            return 1;
        }
        return 0;
    }
    sum += arr[i];
    int l = combination(arr, i + 1, sum, k);
    sum -= arr[i];
    int r = combination(arr, i + 1, sum, k);
    return l + r;
}



int main()
{
    vector<int> v = {2,
                     1,
                     6,
                     7};
    int k = 7;
    cout << combination(v, 0, 0, k);
}