#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int x, n;
    string s;
    cin >> x >> n >> s;
    int ans = 0;
    for (char h : s)
    {
        if (h == '1')
        {
            ans = n;
        }
        else
        {
            ans--;
            if (ans < 0)
            {
                cout << "NO\n";
                return;
            }
        }
    }
    cout << "YES\n";
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