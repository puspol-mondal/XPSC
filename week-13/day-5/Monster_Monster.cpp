#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        ll n, x;
        cin >> n >> x;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.rbegin(), a.rend());
        ll ans = a[0], sum = 0;
        for (int i = 1; i < n; i++)
        {
            sum += x;
            ll cur = a[i] + sum;
            ans = max(ans, cur);
        }
        cout << ans << "\n";
    }

    return 0;
}