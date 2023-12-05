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
	int j=n-1;
	int sum = 0;
	int ans = 0;
	bool verify = true;
	// for (int i = 0; i < n; i++)
	// 	cout << arr[i] << " ";
	while (i <=j)
	{

		if((arr[i]+arr[j])>m){
			ans++;
			j--;
		}
		else if((arr[i]+arr[j])<=m){
			ans++;
			j--;i++;
		}
	}
	cout << ans << endl;
	return 0;
}
