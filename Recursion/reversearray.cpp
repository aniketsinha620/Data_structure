#include <bits/stdc++.h>
using namespace std;

void reverse(int start, int end, int arr[])
{
    if (start >= end)
        return;

   
    swap(arr[start], arr[end]);

    reverse(start + 1, end - 1, arr);
}

int main()
{
    int arr[] = {1, 2, 4, 3};
    reverse(0, 3, arr);

    for (int i = 0; i < 4; ++i)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
