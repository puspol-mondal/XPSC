#include <bits/stdc++.h>
using namespace std;

string findSmolest(string &s)
{
    vector<bool> pre(26, false);
    for (char ch : s)
    {
        pre[ch - 'a'] = true;
    }
    for (int i = 0; i < 26; i++)
    {
        if (!pre[i])
        {
            return string(1, 'a' + i);
        }
    }
    return "None";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    cout << findSmolest(s);

    return 0;
}