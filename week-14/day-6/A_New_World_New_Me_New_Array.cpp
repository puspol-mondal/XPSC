#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k, p;
    cin >> n >> k >> p;
    if (k == 0)
    {
        cout << 0 << "\n";
    }
    int s = abs(k);
    int mx = 0;
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        mx = max(mx, (p * i));
        if (k <= mx || k == mx)
        {
            ans = i;
            break;
        }
    }
    // cout << ans << "\n";
    if (s <= ans)
    {
        cout << ans << "\n";
    }
    else
    {
        cout << -1 << "\n";
    }

    return 0;
}