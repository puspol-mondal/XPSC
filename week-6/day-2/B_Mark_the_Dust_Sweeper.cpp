#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        ll firstPositive = -1;
        ll ans = 0;
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (firstPositive == -1 && a[i] > 0)
            {
                firstPositive = i;
            }
        }
        if (firstPositive == -1 || firstPositive == n - 1)
        {
            cout << 0 << "\n";
            continue;
        }
        for (ll i = firstPositive; i < n - 1; i++)
        {
            ans += a[i];
            if (a[i] == 0)
            {
                ans++;
            }
        }
        cout << ans << "\n";
    }

    return 0;
}