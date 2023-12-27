#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		map<char, int> m;
		string s, s1;
		cin >> s >> s1;
		bool ans = true;
		int cnt = 0;
		for (int i = 0; i < n; i++)
		{
			if (s[i] != s1[i])
			{
				if (ans)
				{
					m[s[i]]++;
					m[s1[i]]++;
					ans = false;
					continue;
				}
				

				if ((m.find(s[i])) && (m.find(s1[i])))
				{
					continue;
				}
				cnt = 1;
				break;
			}
		}
		if (!cnt)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}
