#include <iostream>
#include <vector>
using namespace std;

vector<int> display(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << endl;
    return v;
}

void sub(string s, int n, vector<int> v)
{
    if (n >= s.length())
    {
        display(v);
        return;
    }

    v.push_back(s[n] - '0'); 
    sub(s, n + 1, v);
    v.pop_back();
    sub(s, n + 1, v);
}

int main()
{
    string s;
    cin >> s;
    cout << s << endl;
    vector<int> v;
    sub(s, 0, v);
    return 0;
}
