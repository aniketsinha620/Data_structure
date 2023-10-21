#include <bits/stdc++.h>
using namespace std;

void remove(map<char, int> &m, char ch)
{    if (m[ch] == 1)
        m.erase(ch);
    else
        m[ch]--;
}

int countSubStrings(string s, int k)
{ 
    map<char, int> b, s1;
    int ib = -1, is = -1, ij = -1, ans = 0;
    int n=s.length()-1;
     while (true)
      {   bool big = false, small = false, iject = false;
   
        while (ib < n)
        {
            
            big = true;
            ib++;
            b[s[ib]]++;
            if (b.size() == k + 1)
            {
                remove(b, s[ib]);
                ib--;
                break;
            }
        }

        while (is < n)
        {
            small = true;
            is++;
            s1[s[is]]++;
            if (s1.size() == k)
            {
                remove(s1, s[is]);
                is--;
                break;
            }
        }

        while (ij < is)
        {
            iject = true;
            if (s1.size() == k - 1 && b.size() == k)
                ans += ib - is;
            ij++;
            remove(b, s[ij]);
            remove(s1, s[ij]);
            if (s1.size() < k - 1 || b.size() < k)
                break;
        }

        if (!iject && !big && !small)
            break;
    }
    return ans;
}

int main()
{
    string s = "aacfssa";
    int k = 3;
    int result = countSubStrings(s, k);
    cout <<result << endl;
    return 0;
}
