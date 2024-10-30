#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    map<string, vector<string>> mp;
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if (mp[s].size() == 0)
        {
            mp[s].push_back(s);
            cout << "OK\n";
        }
        else
        {
            mp[s].push_back(s);
            cout << s << mp[s].size() - 1 << "\n";
        };
    }

    return 0;
}