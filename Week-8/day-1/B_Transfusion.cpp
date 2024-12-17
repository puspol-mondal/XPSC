#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int sum_o = 0;
    int sum_e = 0;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        if (i & 1)
        {
            sum_o += x;
        }
        else
        {
            sum_e += x;
        }
    }
    int e = n / 2;
    int o = n - (n / 2);
    if ((sum_e % e) != 0 || (sum_o % o) != 0)
    {
        cout << "NO\n";
        return;
    }
    if ((sum_e / e) == (sum_o / o))
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
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