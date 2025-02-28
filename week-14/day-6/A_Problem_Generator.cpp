#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        string s;
        cin >> s;
        map<char, int> mp;
        for (int i = 0; i < n; i++)
        {
            mp[s[i]]++;
        }

        string cpm = "ABCDEFG";
        int ans = 0;
        for (auto x : cpm)
        {
            if (mp[x] < m)
            {
                ans += (m - mp[x]);
            }
        }
        cout << ans << endl;
    }

    return 0;
}