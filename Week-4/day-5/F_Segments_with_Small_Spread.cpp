#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    multiset<ll> ml;
    ll l = 0, r = 0, ans = 0, sum = 0;
    while (r < n)
    {
        ml.insert(a[r]);
        ll mn = *ml.begin(), mx = *ml.rbegin();
        if (mx - mn <= k)
        {
            ans += r - l + 1;
        }
        else
        {
            while (l <= r)
            {
                mn = *ml.begin(), mx = *ml.rbegin();
                if (mx - mn <= k)
                    break;

                ml.erase(ml.find(a[l]));
                l++;
            }
            mn = *ml.begin(), mx = *ml.rbegin();
            if (mx - mn <= k)
            {
                ans += r - l + 1;
            }
        }

        r++;
    }

    cout << ans << "\n";
    return 0;
}