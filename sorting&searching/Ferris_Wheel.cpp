
// There are n children who want to go to a Ferris wheel, and your task is to find a gondola for each child.
// Each gondola may have one or two children in it, and in addition, the total weight in a gondola may not exceed m. You know the weight of every child.
// What is the minimum number of gondolas needed for the children?
// Input
// The first input line contains two integers n and x: the number of children and the maximum allowed weight.
// The next line contains n integers p_1,p_2,\ldots,p_n: the weight of each child.
// Output
// Print one integer: the minimum number of gondolas.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    int i = 0;
    int j = n - 1;
    int sum = 0;
    int ans = 0;
    bool verify = true;
 
    while (i <= j)
    {

        if ((arr[i] + arr[j]) > m)
        {
            ans++;
            j--;
        }
        else if ((arr[i] + arr[j]) <= m)
        {
            ans++;
            j--;
            i++;
        }
    }
    cout << ans << endl;
    return 0;
}
