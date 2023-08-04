#include <bits/stdc++.h>
using namespace std;

bool checkSubsequence(const vector<int> &arr, int number)
{
  int n = arr.size();
  int maxBit = 1 << n;

  for (int i = 0; i < maxBit; i++)
  {
    int result = number;
    for (int j = 0; j < n; j++)
    {
      if ((i & (1 << j)) && (result & arr[j]) != number)
      {
        result &= arr[j];
      }
    }
    if (result == number)
    {
      return true;
    }
  }
  return false;
}

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int number, b;
    cin >> number >> b;
    vector<int> arr;
    for (int i = 0; i < number; i++)
    {
      int x;
      cin >> x;
      arr.push_back(x);
    }

    bool exists = checkSubsequence(arr, b);

    if (exists)
    {
      cout << "YES " << endl;
    }
    else
    {
      cout << "NO" << endl;
    }
  }
  return 0;
}
