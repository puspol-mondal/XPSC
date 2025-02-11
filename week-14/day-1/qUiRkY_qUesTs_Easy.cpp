#include <bits/stdc++.h>
using namespace std;
#define ll long long
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
        vector<ll> a(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        ll sum = 0;
        for (int i = 1; i <= n; i++)
        {
            sum += a[i];
        }
        ll ans = sum;
        for (ll i = 1; i <= n; i++)
        {
            sum -= a[i];
            ans = max(ans, sum + (i * i));
        }

        cout << ans << endl;
    }

    return 0;
}