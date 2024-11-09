#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    int n = s.size();
    set<int> index;
    string x = "1100";

    int q;
    cin >> q;

    for (int i = 0; i <= n - 4; i++)
    {
        if (s.substr(i, 4) == x)
        {
            index.insert(i);
        }
    }

    while (q--)
    {
        int idx;
        char value;
        cin >> idx >> value;
        idx--;

        s[idx] = value;

        for (int i = max(0, idx - 3); i <= min(n - 4, idx); i++)
        {

            if (s.substr(i, 4) == x)
            {
                index.insert(i);
                        }
            else
            {
                index.erase(i);
            }
        }

        if (index.empty())
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
