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
        ll n, k;
        cin >> n >> k;
        vector<ll> v(n + 1), sp(n + 1), v2(n + 1), eq(n + 1);

        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
            sp[i] = sp[i - 1] + v[i];
        }
        for (int i = 1; i <= n; i++)
        {
            cin >> v2[i];
        }
        for (int i = n; i >= 1; i--)
        {
            if (i == n)
            {
                eq[i] = 1;
            }
            else
            {
                if (v2[i] % v2[i + 1] != 0)
                    eq[i] = 1;
                else
                    eq[i] = eq[i + 1] + 1;
            }
        }
        int mx_sum = 0;
        int l = 1, r = 1;
        ll curr_sum = 0;
        while (l <= n)
        {
            while (r <= n && r - l + 1 <= eq[l] &&
                   curr_sum + v[r] <= k)
            {
                curr_sum += v[r];
                r++;
            }
            mx_sum = max(mx_sum, r - l);
            curr_sum -= v[l];
            l++;
        }
        cout << mx_sum << endl;
    }
    return 0;
}